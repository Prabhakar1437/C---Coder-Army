#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers :";
    cin >> n;
    int i = 1;      // initalize
    while (i <= 10) // break
    {
        cout << i * n << " ";
        i++; // update
    }
}