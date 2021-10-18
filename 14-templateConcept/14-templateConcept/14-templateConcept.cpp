#include <iostream>
#include "templateConcept.h"

template <class Type>
Type getMax(Type a, Type b) {
    Type max;
    a > b ? max = a : max = b;
    return max;
}

/*
int getMax(int a, int b) {
    int max;
    a > b ? max = a : max = b;
    return max;
}

double getMax(double a, double b) {
    double max;
    a > b ? max = a : max = b;
    return max;
}

char getMax(char a, char b) {
    char max;
    a > b ? max = a : max = b;
    return max;
}

string getMax(string a, string b) {
    string max;
    a > b ? max = a : max = b;
    return max;
}
*/
int main()
{
    /*
    cout << getMax(3, 5) << endl;
    cout << getMax(3.5, 5.5) << endl;
    cout << getMax('a','z') << endl;
    cout << getMax("Halil","Acar") << endl;
    */

    /*
    Number<int> numberInt(5);
    Number<int> numberInt2(8);
    Number<float> numberFloat(3.5);
    Number<double> numberDouble(7.5);

    cout << "Integer: " << numberInt.getData() << endl;
    cout << "Integer Two: " << numberInt2.getData() << endl;
    cout << "Float: " << numberFloat.getData() << endl;
    cout << "Double: " << numberDouble.getData() << endl;
    cout << "Result: " << numberInt + numberInt2 << endl;
    cout << "Result: " << numberInt - numberInt2 << endl;
    cout << "Result: " << numberInt * numberInt2 << endl;

    numberInt += numberInt2;
    cout << "Float: " << numberInt.getData() << endl;
    */
    Number<int> numberInt(5);
    Number<float> numberFloat(3.5);
    Number<double> numberDouble(7.5);

    cout << numberInt;
    cout << numberFloat;
    cout << numberDouble;

    Number <int> numberInt2;
    Number <float> numberFloat2;
    Number <double> numberDouble2;

    cout << "Integer: ";
    cin >> numberInt2;
    cout << "Float: ";
    cin >> numberFloat2;
    cout << "Double: ";
    cin >> numberDouble2;

    cout << numberInt2;
    cout << numberFloat2;
    cout << numberDouble2;



}

