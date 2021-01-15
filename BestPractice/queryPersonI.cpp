#include <queryPersonI.h>


::std::shared_ptr<Person> 
queryPersonI::queryPersonById(int personId, const ::Ice::Current& current)
{
	if (personId == 1)
		return shared_ptr<Person>(new Person(string("wang"), string("hao"), ::Ice::nullopt, ::Ice::nullopt));
	else if (personId == 2)
		return shared_ptr<Person>(new Person(string("li"), string("ming"), string("1992.1.1"), ::Ice::nullopt));
	else if (personId == 3)
		return shared_ptr<Person>(new Person(string("zhang"), string("san"), string("1993.11.12"), 27));
	else
	{
		cout << " not found data" << endl;
		return nullptr;
	}
}

::std::shared_ptr<Person> 
queryPersonI::queryPersonByOpt(int personId, Ice::optional<::std::string> name, Ice::optional<int> age, const ::Ice::Current& current)
{
	if (name.has_value())
	{
		cout << "query person by name: " << age.value() << endl;
		if (!name.value().compare("wanghao"))
			return shared_ptr<Person>(new Person(string("wang"), string("hao"), ::Ice::nullopt, ::Ice::nullopt));
		else if (!name.value().compare("liming"))
			return shared_ptr<Person>(new Person(string("li"), string("ming"), string("1992.1.1"), ::Ice::nullopt));
		else if (!name.value().compare("zhangsan"))
			return shared_ptr<Person>(new Person(string("zhang"), string("san"), string("1993.11.12"), 27));
		else
		{
			cout << " not found data" << endl;
			return nullptr;
		}
	}
	else
	{
		cout << "call queryPersonById, personId: " << personId << endl;
		return queryPersonById(personId,current); 
	}

}
