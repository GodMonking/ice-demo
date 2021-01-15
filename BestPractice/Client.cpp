#include <Ice/Ice.h>
#include <queryPerson.h>
#include <stdexcept>
 
using namespace std;
using namespace Demo;
 
int
main(int argc, char* argv[])
{
    try
    {
        Ice::CommunicatorHolder ich(argc, argv, "config.client");
        auto base = ich.communicator()->propertyToProxy("queryPerson.Proxy");
		auto proxy = Ice::checkedCast<CPersonIPrx>(base);
        if(!proxy)
        {
            throw std::runtime_error("Invalid proxy");
        }
 
        auto person1 = proxy->queryPersonById(1);
		cout << "firstname: " << person1->firstName << " lastname: " << person1->lastName 
			 <<  " birthdate: " << (person1->birthDate.has_value() ? person1->birthDate.value() : " ") 
			 <<  " age: " << (person1->age.has_value() ? person1->age.value() : 0) << endl;
		
		auto person2 = proxy->queryPersonByOpt(1,string("liming"),Ice::nullopt);
		//auto person2 = proxy->queryPersonByOpt(2);
		if (person2 != nullptr)
			cout << "firstname: " << person2->firstName << " lastname: " << person2->lastName 
			 	<<  " birthdate: " << (person2->birthDate.has_value() ? person2->birthDate.value() : " ") 
			 	<<  " age: " << (person2->age.has_value() ? person2->age.value() : 0) << endl;
		auto person3 = proxy->queryPersonByOpt(1,string("zhangsan"),Ice::nullopt);
		//auto person3 = proxy->queryPersonByOpt(3);
		cout << "firstname: " << person3->firstName << " lastname: " << person3->lastName 
			 <<  " birthdate: " << (person3->birthDate.has_value() ? person3->birthDate.value() : " ") 
			 <<  " age: " << (person3->age.has_value() ? person3->age.value() : 0) << endl;
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}
