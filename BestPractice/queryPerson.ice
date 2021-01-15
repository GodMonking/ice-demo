module Demo
{
	class Person
	{
		string firstName;
		string lastName;
		optional(1) string birthDate;
		optional(2) int age;
	}
	interface CPersonI{
		Person queryPersonById(int personId);
		Person queryPersonByOpt(int personId, optional(1) string name, optional(2) int age);
	}
}
