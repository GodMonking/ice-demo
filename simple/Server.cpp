#include <Ice/Ice.h>
#include <Printer.h>
 
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
        Ice::CommunicatorHolder ich(argc, argv);
        //cout << "argc: " << argc << endl;
        //cout << "step1..." << endl;
        auto adapter = ich->createObjectAdapterWithEndpoints("SimplePrinterAdapter", "default -p 20001");
        //cout << "step2..." << endl;
        auto servant = make_shared<PrinterI>();
        adapter->add(servant, Ice::stringToIdentity("SimplePrinter"));
        //cout << "step3..." << endl;
        adapter->activate();
        cout << "activate complete..." << endl;
        ich->waitForShutdown();
        //cout << "exit..." << endl;
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}
