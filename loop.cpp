#include <iostream>
using namespace std;

int main()
{

    int counter = 0;
    int i = 0;
    cout << "FOR LOOP: ";
    for (; i <= 10; i++)
    {
        cout << i << " ";
    }

    cout << endl
         << "WHILE LOOP: ";
    int c = counter;
    while (c <= 10)
    {
        cout << c << " ";
        i++;
    }

    cout << endl
         << "DO WHILE LOOP: ";
    int j = counter;
    do
    {
        cout << j << " ";
        j++;
    } while (j <= 10);

    return 0;
}