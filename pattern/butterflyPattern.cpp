#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        /// Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        /// Spaces
        for (int j = 0; j < ((2 * (n - 1)) - (i * 2)); j++)
        {
            cout << "  ";
        }

        /// Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        /// Stars
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }

        /// Spaces
        for (int j = 0; j < i * 2; j++)
        {
            cout << "  ";
        }

        /// Stars
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}