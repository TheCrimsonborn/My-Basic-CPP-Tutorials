//
// Created by Halil Acar on 25.05.2021.
//
#include "classInheritance.h"

int main()
{
    baseClass obj1(5);
    derivedClass obj2(8, 3);
    derivedClass obj3(obj2);

    obj1.print();
    obj2.print();

    //cout << "For base; X: " << obj1.getX() << endl;
    //cout << "For derived; X: " << obj2.getX() << " Y: " << obj2.getY() << endl;

    //CClass cObject;
    //cObject.a = 5;
    //cObject.b = 10;



    return 0;
}