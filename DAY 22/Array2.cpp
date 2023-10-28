#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 11, 7, 15};

    int ans = INT32_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;
}