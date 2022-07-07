#include <iostream>

using namespace std;

int main()
{
    // goto: go to the flagged position of the code

    cout << "1" << endl;
    // FLAG: may cause infinity loop
    cout << "2" << endl;
    goto FLAG;
    // skipped 3,4
    cout << "3" << endl;
    cout << "4" << endl;
FLAG:
    cout << "5" << endl;
    return 0;
}