#include <iostream>

using namespace std;

int main()
{
    // float
    float f1 = 3.1415926f;

    cout << "f1 is: " << f1 << endl;

    // double
    double d1 = 3.1415926;

    cout << "d1 is: " << d1 << endl;

    cout << "float is: " << sizeof(float) << endl;
    cout << "double is: " << sizeof(double) << endl;

    // scientific method
    float f2 = 3e2;
    cout << "f2 is: " << f2 << endl;

    float f3 = 3e-2;
    cout << "f3 is: " << f3 << endl;

    return 0;
}