#include "exceptionHandling.h"
#include <cassert>


int main()
{
    float divisor, dividend, result;
    string str = "Divisor cannot be zero!";
    /*
    cout << "Please enter the dividend: ";
    cin >> dividend;

    cout << "Please enter the divisor: ";
    cin >> divisor;

    assert(divisor != 0);

    result = dividend / divisor;
    cout << "Result is " << result;
    */

    try 
    {
        cout << "Please enter the dividend: ";
        cin >> dividend;
        cout << "Please enter the divisor: ";
        cin >> divisor;

        if (divisor == 0) {
            throw str;
        }
        else if (divisor < 0) {
            throw divisor;
        }
        else if (dividend < 0) {
            throw dividend;
        }
        else {
            throw 12;
        }

        result = dividend / divisor;
        cout << "Result is " << result;
    }
    catch (string x) {
        cout << x << endl;
    }
    catch (float x) {
        cout << x << " cannot be negative number!" << endl;
    }
    catch (...) {
        cout << "default." << endl;
    }

    return 0;
}