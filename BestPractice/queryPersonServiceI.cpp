#include <Ice/Ice.h>
#include <queryPersonServiceI.h>
#include <queryPersonI.h>

using namespace std;
using namespace Demo;
extern "C"
{
    ICE_DECLSPEC_EXPORT IceBox::Service*
    create(const shared_ptr<Ice::Communicator>&)
    {
        return new queryPersonServiceI;
    }
}

void 
queryPersonServiceI::start(const string &name,
					const shared_ptr<Ice::Communicator>& communicator,
					const Ice::StringSeq& args)
{
	_adapter = communicator->createObjectAdapter(name);
	auto object = make_shared<queryPersonI>();
	_adapter->add(object, Ice::stringToIdentity("Demo.CPersonI"));
    _adapter->activate();
}

void
queryPersonServiceI::stop()
{
	_adapter->deactivate();
}
