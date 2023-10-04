#include <iostream>
using namespace std;
int main()
{
    // Divide
    cout << 13 / 2 << endl;
    cout << 13.7 / 2 << endl;
    // Multiply
    cout << 13.2 * 4 << endl;
    cout << 13 * 4 << endl;
    // Uniary Operator(INcrement)
    int a = 10;
    int b = a++;
    cout << b << " " << a << endl;

    // Decrement Operator
    int c = 15;
    int d = c--;
    cout << d << " " << c;
}