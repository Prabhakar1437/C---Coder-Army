#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    // Print 5 to 1
    cout << "Print 5 to 1:" << endl;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}