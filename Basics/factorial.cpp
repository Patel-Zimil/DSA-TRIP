#include <iostream>
using namespace std;

int main()
{

    cout << "Enter number : ";
    int n;
    cin >> n;

    int fact;

    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }

    cout << endl
         << "Fact of " << n << " is : " << fact << endl;

    return 0;
}