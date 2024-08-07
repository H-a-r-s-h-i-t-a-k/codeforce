#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll s1 = INT_MAX, s2 = INT_MAX;
        n *= 2;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << abs(a[1] - a[0]) << endl;
    }
    return 0;
}