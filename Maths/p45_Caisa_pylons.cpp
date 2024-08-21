#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

#define int long long int
#define INF 1e18

using namespace std;

int power(int x, int y, int MOD = INF)
{
    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
        return power((x * x) % MOD, y / 2) % MOD;
    }
    else
    {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
            cout << power(2, __lg(ar[i])) << " ";
        }
        cout << "\n";
    }
    return 0;
}