#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a = 0, b = 0, n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != i % 2)
        {
            if (arr[i] % 2 == 0)
                a++;
            else
                b++;
        }
    }
    if (b != a)
        cout << "-1" << endl;
    else
        cout << a << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}