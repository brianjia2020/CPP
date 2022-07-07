#include <iostream>

using namespace std;

int main()
{
    // continue
    // skip the remaining code of inside the current loop

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            continue;
        // break will stop the loop when i == 0 so nothing will print out
        cout << i << endl;
    }
    return 0;
}