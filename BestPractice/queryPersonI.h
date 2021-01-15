#include <Ice/Ice.h>
#include <queryPerson.h>

using namespace std;
using namespace Demo;

class queryPersonI : public CPersonI
{
public:
	virtual ::std::shared_ptr<Person> queryPersonById(int personId, const ::Ice::Current& current);
	virtual ::std::shared_ptr<Person> queryPersonByOpt(int personId, Ice::optional<::std::string> name, Ice::optional<int> age, const ::Ice::Current& current);
};
