#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << col * col << " ";
        }
        cout << endl;
    }
    cout << "Print the cube of number:" << endl;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << col * col * col << " ";
        }
        cout << endl;
    }
}