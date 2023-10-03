#include <iostream>
using namespace std;
int main()
{
    // int row, col;
    int n;
    cout << "Enter the input" << endl;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (char name = 'A'; name <= 'A' + row - 1; name++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
}