#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    if (number > 0)
    {
        cout << "+ve";
    }
    else if (number == 0)
    {
        cout << "zero";
    }
    else
    {
        cout << "negative";
    }
}