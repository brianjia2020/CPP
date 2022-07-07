#include <iostream>

using namespace std;

int main()
{

    // 1. get user input
    int mark = -1;
    cout << "Please input a value for mark: " << endl;
    cin >> mark;

    cout << "Your mark is " << mark << endl;

    if (mark >= 600)
    {
        cout << "Congratulations! you are into mcmaster university" << endl;
    }
    else if (mark >= 400 && mark < 600)
    {
        cout << "Congratulations! you are into chunyang university" << endl;
    }
    else
    {
        cout << "Unfortunately, you have to try again. " << endl;
    }
    return 0;
}