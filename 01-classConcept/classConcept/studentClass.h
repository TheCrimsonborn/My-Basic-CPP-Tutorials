//
// Created by Halil Acar on 21.05.2021.
//

#include <iostream>
using namespace std;

class Student {
private:
	string studentName, studentSurname, studentID; //Member Variables
public:
	Student();
	Student(string, string, string);
	~Student();
	Student(const Student& oth);

	void displayInformation(); //Member Function
	void setName(string name) {
		studentName = name;
	}
	void setSurname(string surname) {
		studentSurname = surname;
	}
	void setID(string ID) {
		studentID = ID;
	}
	void setInformation(string name, string surname, string ID) {
		studentName = name;
		studentSurname = surname;
		studentID = ID;
	}

	string getName() {
		return studentName;
	}
	string getSurname() {
		return studentSurname;
	}
	string getID() {
		return studentID;
	}
};

Student::Student() {
	cout << "Default constructor worked." << endl;
}
Student::Student(string name, string surname, string ID) {
	cout << "Constructor worked." << endl;
	studentName = name;
	studentSurname = surname;
	studentID = ID;
}
Student::~Student(){
	cout << "Destructor worked." << endl;
}
Student::Student(const Student& oth) {
	cout << "Copy constructor worked." << endl;
	studentName = oth.studentName;
	studentSurname = oth.studentSurname;
	studentID = oth.studentID;

}

void Student::displayInformation() {
	cout << "Name: " << studentName << " " << studentSurname << endl;
	cout << "ID: " << studentID << endl;

}