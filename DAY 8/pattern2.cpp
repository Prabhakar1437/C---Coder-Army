#include <iostream>
using namespace std;
int main()
{
    // for row
    for (int row = 1; row <= 5; row++)
    { // for column
        for (int col = 1; col <= 5; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << "Print 10 4 times" << endl;
    // Print 10
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            cout << "10"
                 << " ";
        }
        cout << endl;
    }
}