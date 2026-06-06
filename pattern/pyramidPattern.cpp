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

        for (int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        int num = 1;
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            if (j <= i)
            {
                num = j;
            }
            else if (j > i && j < i + 1)
            {
                num = i - 1;
            }
            else
            {
                num--;
            }
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}