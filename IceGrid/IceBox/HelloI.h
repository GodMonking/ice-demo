#include <Ice/Ice.h>
#include <Hello.h>
 
using namespace std;
using namespace Demo;
 
class HelloI : public Hello
{
public:
    virtual string HelloWorld(const Ice::Current&) override;
};
