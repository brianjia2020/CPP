#include <iostream>

using namespace std;

int main()
{

    // switch
    // mark a movie
    // 10 ~ 9: legendary
    // 8 ~ 7: excellent
    // 6 ~ 5: normal
    // under 5: garbage
    cout << "Please rate this movie: (1 to 10) ";
    int score = 0;
    cin >> score;
    cout << "You rated the movie as " << score << endl;
    switch (score)
    {
    case 10:
        cout << "This movie is lengenday to you" << endl;
        break; // get out of this branch when done
    case 9:
        cout << "This movie is lengenday to you" << endl;
        break;
    case 8:
        cout << "This movie is excellent to you" << endl;
        break;
    case 7:
        cout << "This movie is excellent to you" << endl;
        break;
    case 6:
        cout << "This movie is normal to you" << endl;
        break;
    case 5:
        cout << "This movie is normal to you" << endl;
        break;
    default:
        cout << "This movie is garbage to you" << endl;
        break;
    }
    return 0;
}