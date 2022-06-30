#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    int a2 = 10;
    int b2 = 20;
    cout << "a2 / b2 = " << a2 / b2 << endl;

    int a3 = 10;
    int b3 = 0;
    // throw an exception
    // cout << "a3 / b3 = " << a3 / b3 << endl;

    // divide by two float
    double a4 = 0.5;
    double b4 = 0.245;

    cout << "a4 / b4 = " << a4 / b4 << endl;

    return 0;
}