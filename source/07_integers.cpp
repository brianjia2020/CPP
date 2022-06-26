#include <iostream>

using namespace std;

int main()
{
    // short
    // out of bound for short
    // short num1 = 32768;
    short num1 = 10;

    // int
    int num2 = 20;

    // long
    long num3 = 30;

    // long long
    long long num4 = 40;

    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
    cout << "num3 is: " << num3 << endl;
    cout << "num4 is: " << num4 << endl;

    cout << "short is: " << sizeof(short) << endl;
    cout << "int is: " << sizeof(int) << endl;
    cout << "long is: " << sizeof(long) << endl;
    cout << "long long is: " << sizeof(long long) << endl;

    return 0;
}