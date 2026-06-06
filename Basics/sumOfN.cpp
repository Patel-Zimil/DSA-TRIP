#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    int sum = 0;

    cout << "Enter value of n:";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << endl
         << "Sum: " << sum << endl;

    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    cout << endl
         << "Sum of Odd: " << sum << endl;

    return 0;
}