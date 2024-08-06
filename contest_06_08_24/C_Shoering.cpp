#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string shoering(ll n, ll s, ll m, ll l[], ll r[])
{
    ll space = 0;
    for (ll i = 0; i < n; i++)
    {
        if (l[i + 1] > r[i])
        {
            if (i <= n - 1)
                if ((l[i + 1] - r[i]) >= s)
                {
                    cout << l[i + 1] << " " << r[i];
                    return "YES";
                }
        }
        else
        {
            cout << "no" << endl;
            break;
        }
    }

    if ((m - r[n - 1]) >= s)
    {
        cout << "Yes" << endl;
    }
    if (space)

        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ll t, sum = 0;
    cin >> t;
    while (t--)
    {
        ll n, s, m;

        cin >> n >> s >> m;
        ll space = 0, l[n], r[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
            if (space == 0 && l[0] >= s)
                space = 1;
        }
        if (space)
        {
            cout << "yEes" << endl;
            continue;
        }
        cout << showing(n, s, m, l, r) << endl;
    }

    return 0;
}