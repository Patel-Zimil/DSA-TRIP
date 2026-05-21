#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    bool isPrime = true;

    cout << "Enter  num:";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << endl
             << "Given number is prime" << endl;
    }
    else
    {
        cout << endl
             << "Given number is not Prime" << endl;
    }

    return 0;
}