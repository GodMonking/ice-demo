#include <Ice/Ice.h>
#include <Hello.h>
#include <stdexcept>
 
using namespace std;
using namespace Demo;
 
int
main(int argc, char* argv[])
{
    try
    {
        Ice::CommunicatorHolder ich(argc, argv);
        auto base = ich->stringToProxy("HelloImp:default -p 10000");
        auto hello = Ice::checkedCast<HelloPrx>(base);
        if(!hello)
        {
            throw std::runtime_error("Invalid proxy");
        }
 
        hello->HelloWorld();
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}
