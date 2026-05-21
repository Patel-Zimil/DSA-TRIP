#include <iostream>
using namespace std;

int main()
{

    // integer data type
    int age = 18;
    char firstLetter = 'Z';
    float height = 5;
    double price = 100.99;
    bool isFemale = false; // true - 1, false - 0

    cout << "Age: " << age << endl
         << "Size of age:" << sizeof(age) << endl;

    cout << "First Letter: " << firstLetter << endl
         << "Size of firstLetter: " << sizeof(firstLetter) << endl;

    cout << "Height:" << height << endl
         << "Size of height: " << sizeof(height) << endl;

    cout << "Price:" << price << endl
         << "Size of Price: " << sizeof(price) << endl;

    cout << "IsFemale:" << isFemale << endl
         << "Size of IsFemale: " << sizeof(isFemale) << endl;

    return 0;
}