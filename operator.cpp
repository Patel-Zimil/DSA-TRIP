#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    // arithmetic
    cout << "a + b : " << a + b << endl;
    cout << "a - b : " << a - b << endl;
    cout << "a / b : " << (double)a / b << endl;
    cout << "a * b : " << a * b << endl;
    cout << "a % b : " << a % b << endl;

    // relational
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "10 <= 10 : " << (10 <= 10) << endl;
    cout << "10 >= 10 : " << (10 >= 'a') << endl;

    // Logical
    cout << "(a == b && a < b) : " << (a == b && a > b) << endl;
    cout << "(a == b || a < b) : " << (a == b || a > b) << endl;
    cout << "!(a == b || a < b) : " << !(a == b || a > b) << endl;

    // Unary
    cout << "a++ : " << a++ + ++a << endl;
    cout << "++a : " << ++a << endl;
}