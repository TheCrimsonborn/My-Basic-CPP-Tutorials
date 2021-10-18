#include <iostream>
#include "Vehicle.h"

int main()
{
    Vehicle* vPtr[] = { new Car(125.850,"BMW"),new Bike(37.500,"Honda") };
    int which_vechile;
    char inputVechile;

    do {
        fflush(stdin);
        cout <<  "Enter vechile type and input: ";
        cin >> which_vechile >> inputVechile;
        switch(inputVechile) {
        case 'U':
            vPtr[which_vechile]->increaseSpeed();
            vPtr[which_vechile]->displayInfo();
            break;
        case 'D':
            vPtr[which_vechile]->decreaseSpeed();
            vPtr[which_vechile]->displayInfo();
            break;
        case 'C':
            vPtr[which_vechile]->stopEngine();
            vPtr[which_vechile]->displayInfo();
            break;

        case 'S':
            vPtr[which_vechile]->startEngine();
            vPtr[which_vechile]->displayInfo();
            break;

        default:
            cout << "Enter valid input." << endl;
            break;

        }

    } while (which_vechile != -1);
    return 0;
}


