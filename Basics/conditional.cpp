#include <iostream>
using namespace std;

int main()
{

    char alpha;

    cout << "Enter alphabet: ";
    cin >> alpha;

    if (alpha >= 'a' && alpha <= 'z')
    {
        cout << endl
             << "Lowercase" << endl;
    }
    else
    {
        cout << endl
             << "Uppercase" << endl;
    }

    /// Using ternary
    (alpha >= 'a' && alpha <= 'z') ? cout << endl
                                          << "Lowercase" << endl
                                   : cout << endl
                                          << "Uppercase" << endl;
    return 0;
}