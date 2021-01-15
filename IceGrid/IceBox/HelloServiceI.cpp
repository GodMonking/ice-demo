#include <Ice/Ice.h>
#include <HelloServiceI.h>
#include <HelloI.h>

using namespace std;
using namespace Demo;
extern "C"
{
    ICE_DECLSPEC_EXPORT IceBox::Service*
    create(const shared_ptr<Ice::Communicator>&)
    {
        return new HelloServiceI;
    }
}

void 
HelloServiceI::start(const string &name,
					const shared_ptr<Ice::Communicator>& communicator,
					const Ice::StringSeq& args)
{
	cout << "step1" << "name:" << name << endl;
	_adapter = communicator->createObjectAdapter(name);
	cout << "step2" << endl;
	auto object = make_shared<HelloI>();
	cout << "step3" << endl;
	_adapter->add(object, Ice::stringToIdentity("HelloImp"));
	cout << "step4" << endl;
    _adapter->activate();
	cout << "service start complete" << endl;
}

void
HelloServiceI::stop()
{
	_adapter->deactivate();
}
