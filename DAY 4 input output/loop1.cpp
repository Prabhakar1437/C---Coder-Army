#include <iostream>
using namespace std;
int main()
{ /*
     for (int count = 1; count <= 5; count++)
     {
         cout << "Coder Army" << endl;
     }
     */
    /*
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        ;
    }
    */
    /*
     int n;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
         cout << i * i << endl;
         ;
     }
     */
    int n;
    cin >> n;
    for (int i = 2; i <= n; i = i + 2)
    {
        cout << i << endl;
        ;
    }
}