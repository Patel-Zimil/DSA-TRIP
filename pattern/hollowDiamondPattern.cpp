#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter value of n: ";
    cin >> n;

    /// Upper part
    for (int i = 0; i < n; i++)
    {

        /// Spaces
        for (int space = 1; space < n - i; space++)
        {
            cout << "  ";
        }

        /// Stars
        for (int j = 1; j <= (i * 2) + 1; j++)
        {
            if (j == 1 || j == ((i * 2) + 1))
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    // /// Lower part
    for (int i = n - 1; i >= 1; i--)
    {

        /// Spaces
        for (int space = 0; space <= ((n - 1) - i); space++)
        {
            cout << "  ";
        }

        /// Stars
        for (int j = (i * 2 - 1); j >= 1; j--)
        {
            if (j == (i * 2 - 1) || j == 1)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}