#include <iostream>
#include "Person.h"

int main()
{
    Person* pArr[] = { new TurkishPerson("Halil"),new TurkishPerson("Samet"),new TurkishPerson("Nadile"),new DeutschePerson("Thomas"),new DeutschePerson("Hans") };
    int numberOfPerson = sizeof(pArr) / sizeof(pArr[0]);
    for (int i = 0; i < numberOfPerson; i++) {
        for (int j = 0; j < numberOfPerson; j++) {
            if (i != j) {
                pArr[i]->sayHi(*pArr[j]);
            }
        }
        cout << "\n";
    }

    return 0;
}
