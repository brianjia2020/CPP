#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 20, c = 0;
    c = a > b ? a : b;

    cout << "c = " << c << endl;

    a > b ? c : a = 100;
    cout << "c = " << c << endl;

    return 0;
}