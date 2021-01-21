#include <Ice/Ice.h>
#include <Printer.h>
#include <string>
 
using namespace std;
using namespace Demo;
 
class PrinterI : public Printer
{
public:
    virtual void printString(string s, const Ice::Current&) override;
};
 
void 
PrinterI::printString(string s, const Ice::Current&)
{
    cout << s << endl;
}
 
int
main(int argc, char* argv[])
{
    try
    {
        if (argc < 2)
        {
            cerr << "not input config file" << endl;
            return 1;
        }

        Ice::CommunicatorHolder ich(argc, argv);
        auto communicator = ich.communicator();
        auto properties = communicator->getProperties();
        cout << "adapter: " << properties->getProperty("SimplePrinterAdapter.AdapterId") << endl;
        auto adapter = ich->createObjectAdapter("SimplePrinterAdapter");
        auto servant = make_shared<PrinterI>();
        adapter->add(servant, Ice::stringToIdentity("SimplePrinter"));
        adapter->activate();
        cout << "activate complete..." << endl;
        ich->waitForShutdown();
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << endl;
        return 1;
    }

    cout << "exit..." << endl;

    return 0;
}
