
#include <iostream>
using namespace std;
int main()
{
    // factoraial of number
    /*
    int n;
    cout << "Enter the number:";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    */
    int n;
    cout << "Enter the number:";
    cin >> n;
    if (n < 2)
    {
        cout << "Not Prime";
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not Prime";
                return 0;
            }
        }
        cout << "Prime";
    }
    return 0;
}