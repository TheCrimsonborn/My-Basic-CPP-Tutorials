//
// Created by Halil Acar on 22.05.2021.
//
#include <iostream>
#include "Triangle.h"
using namespace std;


int main()
{
    float a, b, c;
    cout << "Please enter the side (a-b-c): " << endl;
    cin >> a >> b >> c;
    Triangle triangle1(a, b, c);//constructor triggered.
    Triangle triangle2 = triangle1;//copy constructor triggered.
    Triangle triangle3(triangle1);//copy constructor triggered.

    
    cout << "-Triangle 1-" << endl;
    cout << "Side A: " << triangle1.getSideA() << endl;
    cout << "Side B: " << triangle1.getSideB() << endl;
    cout << "Side C: " << triangle1.getSideC() << endl;
    cout << "Area: " << triangle1.calculatearea() << endl;
    triangle1.triangleType();

   
    cout << "-Triangle 2-" << endl;
    triangle2.setValue(5, 5, 5);
    cout << "Side A: " << triangle2.getSideA() << endl;
    cout << "Side B: " << triangle2.getSideB() << endl;
    cout << "Side C: " << triangle2.getSideC() << endl;
    cout << "Area: " << triangle2.calculatearea() << endl;
    triangle2.triangleType();

    



    return 0;
}