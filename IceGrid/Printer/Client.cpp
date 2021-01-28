#include <Ice/Ice.h>
#include <Printer.h>
#include <stdexcept>
#include <IceGrid/IceGrid.h>
 
using namespace std;
using namespace Demo;
 
int
main(int argc, char* argv[])
{
    try
    {
        //Ice::CommunicatorHolder ich(argc, argv, "config.client");        
        Ice::CommunicatorHolder ich(argc, argv);        
        //v1-- auto base = ich->stringToProxy("SimplePrinter@SimplePrinterAdapter");
        //v2-- auto base = ich->stringToProxy("SimplePrinter@PrinterAdapters");
        //v3--
		//auto base = ich->stringToProxy("SimplePrinter");
        //auto printer = Ice::checkedCast<PrinterPrx>(base);
		
        auto query = Ice::checkedCast<IceGrid::QueryPrx>(ich->stringToProxy("MKIceGrid/Query"));
        auto printer = Ice::checkedCast<PrinterPrx>(query->findObjectByType("::Demo::Printer"));
        
		if(!printer)
        {
            throw std::runtime_error("Invalid proxy");
        }

 
        printer->printString("Hello World!");
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}
