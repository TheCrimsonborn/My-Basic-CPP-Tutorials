//
// Created by Halil Acar on 29.05.2021.
//
#include <iostream>
#include <time.h>
#include "Person.h"
using namespace std;

int main()
{
    srand(time(NULL));
    Student studentArray[] = { {"Halil","Acar",19658523},{"Elif","Uzen",17401562},{"John","Doe",12345678},{"Lorem","Ipsum",87654321} };
    Teacher teacher1("Samet", "Acar", "OOP");

    for (int i = 0; i < 4; i++) {
        studentArray[i].setStudentGrade(rand() % 100 + 1);
        studentArray[i].print();
    }

    teacher1.passFailStatus(studentArray);
    teacher1.printStudentInformantion(studentArray);

    return 0;
}
