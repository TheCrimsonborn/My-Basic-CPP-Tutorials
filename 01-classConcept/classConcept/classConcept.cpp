//
// Created by Halil Acar on 21.05.2021.
//

#include <iostream>
#include "studentClass.h"
using namespace std;

int main()
{
    Student student1;
    Student student2;
    Student student3("Nadile", "Acar", "12345678");
    Student student4(student3);

    student1.setName("Halil");
    student1.setSurname("Acar");
    student1.setID("196585230");

    string name = student1.getName();
    string surname = student1.getSurname();
    string ID = student1.getID();

    cout << name << endl;
    cout << surname << endl;
    cout << ID << endl;

    student2.setInformation("Medine Elif", "Uzen", "17401562");
    student2.displayInformation();

    student3.displayInformation();

    if (true) {
        Student student5;
    }
    student4.displayInformation();
    return 0;
}
