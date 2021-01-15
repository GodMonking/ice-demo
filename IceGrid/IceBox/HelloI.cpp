#include <HelloI.h>

string 
HelloI::HelloWorld(const Ice::Current&)
{
	string s = "Hello world!";
    cout << s << endl;
	return s;
}
