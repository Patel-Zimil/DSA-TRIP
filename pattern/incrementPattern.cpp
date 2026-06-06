// Square pattern

#include <iostream>
using namespace std;

int main()
{

    int n;
    int val = 1;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }

    return 0;
}