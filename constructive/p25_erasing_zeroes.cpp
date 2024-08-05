#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k, l = -1, r = -1;
    string num;

    cin >> k;
    while (k--)
    {
        l = -1, r = -1;
        cin >> num;

        for (ll i = 0; i < num.size(); i++)
        {
            if (num[i] == '1')
            {
                l = i;
                break;
            }
        }

        for (ll i = num.size() - 1; i >= 0; i--)
        {
            if (num[i] == '1')
            {
                r = i;
                break;
            }
        }
        if (l == -1 && r == -1)
        {
            cout << 0 << endl;
            continue;
        }
        ll count = 0;
        for (ll i = l; i <= r; i++)
        {
            if (num[i] == '0')
                count++;
        }
        cout << count << endl;
    }

    return 0;
}