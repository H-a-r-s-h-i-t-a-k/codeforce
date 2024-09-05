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
        ll ar[n], v, l_odd = -1;
        vector<ll> odd, even;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            ar[n] = v;

            if (v % 2 != 0)
            {

                if (v > l_odd)
                    l_odd = v;
            }
            else
            {
                even.push_back(v);
            }
        }

        if (even.empty() || l_odd == -1)
        {
            cout << 0 << endl;
            continue;
        }

        // odd.sort();
        sort(even.begin(), even.end());
        int operation = even.size();
        for (int i = 0; i < even.size(); i++)
        {

            if (even[i] < l_odd)
            {
                l_odd += even[i];
            }
            else
            {

                operation++;

                break;
            }
        }

        cout << operation << "\n";
    }
    return 0;
}