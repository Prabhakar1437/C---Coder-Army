// Convert a to A
#include <iostream>
using namespace std;
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    char name;
    cout << "Enter the letter :";
    cin >> name;
    cout << convert(name);
}