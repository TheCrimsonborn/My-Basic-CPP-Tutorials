#include <iostream>
using namespace std;

class Person {
private:
	string personName, personSurname;
	int personAge;
public:
	//Friend Fuction
	friend void PersonFriend(const Person& personObject);
	friend bool operator != (const Person& firstObject, const Person& secondObject);

	//IO Operators Overloading
	friend ostream& operator << (ostream&, const Person&);
	friend istream& operator >> (istream&, Person&);


	Person();
	Person(string name, string surname, int age);
	void displayPerson();
	bool operator==(const Person& oth);
	//Prefix
	void operator++();
	//Postfix
	void operator++(int);



};
Person::Person() {
	personName = "";
	personSurname = "";
	personAge = 0;
}
Person::Person(string name, string surname, int age) {
	personName = name;
	personSurname = surname;
	personAge = age;
}

void Person::displayPerson() {
	cout << "Name: " << personName << endl;
	cout << "Surname: " << personSurname << endl;
	cout << "Age: " << personAge << endl;
}

bool Person :: operator==(const Person& oth) {
	return(personName == oth.personName && personSurname == oth.personSurname && personAge==oth.personAge);
}

//Prefix
void Person::operator++() {
	personAge += 1;
}
//Postfix
void Person::operator++(int) {
	personAge += 1;
}

//Friend Fuction
void PersonFriend(const Person& personObject) {
	cout << "Name: " << personObject.personName << endl;
	cout << "Surname: " << personObject.personSurname << endl;
	cout << "Age: " << personObject.personAge << endl;
}
bool operator != (const Person& firstObject, const Person& secondObject) {
	return(firstObject.personName != secondObject.personName && firstObject.personSurname != secondObject.personSurname && firstObject.personAge != secondObject.personAge);
}

//IO Operators Overloading
ostream& operator << (ostream& osObject, const Person& personObject) {
	osObject << "Name: " << personObject.personName << endl
		<< "Surname: " << personObject.personSurname << endl
		<< "Age: " << personObject.personAge << endl;
	return osObject;
}
istream& operator >> (istream& isObject, Person& personObject) {
	isObject >> personObject.personName >> personObject.personSurname >> personObject.personAge;
	return isObject;
}