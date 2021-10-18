//
// Created by Halil Acar on 24.05.2021.
//
#include <iostream>
#include "bankAccount.h"
using namespace std;

int main()
{
    bankAccount acc1("Halil", "Acar",1500,"05445670811");
    cout << "Name: " << acc1.getPersonName() << endl;
    cout << "Surname: " << acc1.getPersonSurname() << endl;
    cout << "Phone: " << acc1.getPersonPhone() << endl;
    cout << "Balance: " << acc1.getPersonBalance() << endl;

    bankAccount acc2 = acc1;
    cout << "Name: " << acc1.getPersonName() << endl;
    cout << "Surname: " << acc1.getPersonSurname() << endl;
    cout << "Phone: " << acc1.getPersonPhone() << endl;
    cout << "Balance: " << acc1.getPersonBalance() << endl;

    acc1.credit(150);
    acc1.displayProfile();
    acc1.withdraw(300);
    acc1.displayProfile();

    bankAccount acc3("Elif", "Üzen");
    acc3.displayProfile();
    acc1.sendMoney(acc3, 5);
    acc3.displayProfile();
    acc1.displayProfile();


    
    return 0;
}
