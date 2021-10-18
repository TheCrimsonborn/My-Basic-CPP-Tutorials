//
// Created by Halil Acar on 23.05.2021.
//
#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date mainDate(19, 07, 1999);
    cout << "Day: " << mainDate.getDay() << endl;
    cout << "Month: " << mainDate.getMonth() << endl;
    cout << "Year: " << mainDate.getYear() << endl;
    mainDate.displayDate();

    Date mainDate2(01, 01, 2020);
    mainDate2.displayDate();

    mainDate.compareDate(mainDate2);

    cout << "-----------------" << endl;
    for (int i = 0; i < 30; i++) {
        mainDate2.increaseDay();
        mainDate2.displayDate();
    }



    return 0;
}
