#include <iostream>
using namespace std;

class Employee {
public:
	string empName, empSurname;
	double empSalary;
	Employee(string name, string surname, double salary) {
		empName = name;
		empSurname = surname;
		empSalary = salary;
	}
	virtual ~Employee() {
		cout << "Employee destructor worked" << endl;
	}
	//The "virtual" keyword for "Virtual Function"
	virtual void displayInformation() {
		cout << "Name: " << empName << endl;
		cout << "Surname: " << empSurname << endl;
		cout << "Salary: " << empSalary << endl;
	}
};

class Manager :public Employee {
public:
	string mngDepartment;
	Manager(string name, string surname, double salary, string department) :Employee(name, surname, salary) {
		mngDepartment = department;
	}
	~Manager() {
		cout << "Manager destructor worked" << endl;
	}
	void displayInformation() {
		Employee::displayInformation();
		cout << "Department: " << mngDepartment << endl;
	}
	void increaseSalary() {
		empSalary += 200;
	}
};

//Reference
void print(Employee& employeeType) {
	employeeType.displayInformation();
}

//Pointer
void print2(Employee* employeeType) {
	employeeType->displayInformation();
}

//Value
void print3(Employee employeeType) {
	employeeType.displayInformation();
}

//Pure Virtual Function & Abstract Class
class Animal {
public:
	virtual void talk() = 0;
};

class Dog :public Animal {
public:
	void talk() {
		cout << "Woof woof!" << endl;
	}
};
class Cat :public Animal {
public:
	void talk() {
		cout << "Meow!" << endl;
	}
};
class Duck :public Animal {
public:
	void talk() {
		cout << "Quack!" << endl;
	}
};