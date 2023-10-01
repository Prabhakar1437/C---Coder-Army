
#include <iostream>
using namespace std;
int main()
{
    // Print a number from 100 to 200.
    /*
    for (int i = 100; i <= 200; i++)
    {
        cout << i << endl;
    }
    */
    // Print a character from a to z.
    /*
    for (char name = 'a'; name <= 'z'; name++)
    {
        cout << name << " ";
    }
    */
    // Print number from 10 to 1.
    /*
    int n, i;
    cout << "Enter the number:";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    */
    // Print number from 1 to 100 but gap between no is 3.
    /*
    for (int i = 1; i <= 100; i = i + 3)
    {
        cout << i << " ";
    }
    */
    // Print table
    /*
     int n;
     cout << "Enter the number:";
     cin >> n;
     for (int i = 1; i <= 10; i++)
     {
         cout << n << " "
              << "*"
              << " " << i << "=" << n * i << endl;
     }
     */
    // Find Power of number
    /*
    int n, pow, num;
    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the Power:";
    cin >> pow;
    num = n;
    for (int i = 1; i < pow; i = i + 1)
    {
        num = num * n;
    }
    cout << num;
    */
    // Sum of N natural number
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << (n * (n + 1)) / 2 << endl;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
        // sum = sum + i * i;
    }
    cout << sum;
}