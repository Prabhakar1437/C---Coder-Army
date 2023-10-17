#include <iostream>
using namespace std;
int Sum(int m, int n) // Function declear
{
    int ans = m + n; // function define
    return ans;
}
int Mul(int m, int n)
{
    int ans = m * n;
    return ans;
}
void fun()
{
    cout << "Hello Coder Army \n";
}

int main()
{
    int a, b;
    cout << "Enter two num ";
    cin >> a >> b;
    // Function call
    cout << Sum(a, b) << endl;
    cout << Mul(a, b) << endl;
    fun();
}