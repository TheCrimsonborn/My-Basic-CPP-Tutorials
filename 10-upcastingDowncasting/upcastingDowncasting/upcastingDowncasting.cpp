#include <iostream>
#include "upcastingDowncasting.h"

int main()
{
    /*
    Employee* emp1, * emp2;
    Manager mng("Halil", "Acar", 5500, "Software");

    //UpCasting
    emp1 = &mng;
    emp1->displayInformation();
    mng.displayInformation();
    */

    //DownCasting
    /*
    cout << "---------------------------------" << endl;
    Employee emp("Elif", "Uzen", 3900);
    Employee* emp2 = &emp;

    Manager* mng2 = (Manager*)(emp1);

    Manager* mng3 = (Manager*)(emp2);
    cout << mng3->mngDepartment << endl;
    cout << "---------------------------------" << endl;

    emp1->displayInformation();
    mng2->displayInformation();
    */


    //Pass by Value & Pass by Reference
    /*
    Employee emp1("Halil", "Acar", 5500);
    Manager mng1("Halil", "Acar", 5500, "Software");
    cout << "\n------------------------BY REFERENCE----------------------" << endl;
    print(emp1);
    print(mng1);
    cout << "\n------------------------BY POINTER----------------------" << endl;
    Employee* emp2 = new Employee("Halil", "Acar", 5500);
    Manager* mng2 = new Manager("Halil", "Acar", 5500, "Software");
    print2(emp2);
    print2(mng2);
    cout << "\n------------------------BY VALUE----------------------" << endl;
    print3(emp1);
    print3(mng1);
    */

    //Virtual Destructor 
    /*Manager* mng = new Manager("Halil", "Acar", 3500, "Software");
    Employee* emp = mng;
    Employee* emp2 = new Manager("Halil", "Acar", 3500, "Software");

    delete emp2;
    delete emp;*/


    //Pure Virtual Function & Abstract Class

    Dog* dogAnimal = new Dog();
    Cat* catAnimal = new Cat();
    Duck* duckAnimal = new Duck();

    Animal* animalObject[] = { dogAnimal,catAnimal,duckAnimal };
    for (int i = 0; i < 3; i++) {
        animalObject[i]->talk();
    }

    return 0;
}
