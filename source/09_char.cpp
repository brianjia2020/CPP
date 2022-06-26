#include <iostream>

using namespace std;

int main()
{
    // 1. create
    char c = 'a';

    cout << "char c is: " << c << endl;
    // 2. memory usage
    cout << "char c is: " << sizeof(char) << endl;
    // 3. common errors
    char c2 = 'b';

    // 4. ascii number
    // a -> 97
    // A -> 65
    cout << "ascii number of c2 is: " << (int)c2 << endl;

    return 0;
}