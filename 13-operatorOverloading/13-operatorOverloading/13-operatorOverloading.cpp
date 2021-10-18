#include <iostream>
#include "operatorOverloading.h"

/*	
	List of operators that cannot be overloaded;
1> Scope Resolution Operator (::)
2> Pointer to Member Operator (.*)
3> Member Access or Dot Operator (.)
4> Ternary or Conditional Operator (?:)
5> Object size Operator (sizeof)
6> Object type Operator (typeid)
*/
int main()
{
	Person person1("John", "Doe", 21);
	Person person2("Max", "Lou", 21);
	Person person3("John", "Doe", 24);

	//Friend Fuction
	PersonFriend(person1);

	//Prefix
	++person1;
	//Postfix
	person1++;

	person1.displayPerson();
	person2.displayPerson();
	person3.displayPerson();

	cout << "Member: " << endl;
	//person1 == person2 ? cout << "Same person " << endl : cout << "Not same person." << endl;
	person1 == person3 ? cout << "Same person " << endl : cout << "Not same person." << endl;

	cout << "Non member:" << endl;
	person1 != person2 ? cout << "Not same person" << endl : cout << "Same person" << endl;

	//IO Operators Overloading
	cout << "---------------- IO Operators Overloading ----------------" << endl;
	Person person4;
	cin >> person4;
	cout << person4;
}

