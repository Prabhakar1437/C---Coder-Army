#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int i = 1; // initilize
    do
    {
        cout << i << endl;
        i++;          // update
    } while (i <= n); // break
}