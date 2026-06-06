// Inverted triangle pattern

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        /// Space

        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }

        for (int j = i; j <= n; j++)
        {
            cout << char(i + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}