#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll a;
    cin >> a;

    vector<int> ans;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            char ch;
            cin >> ch;

            if (ch == '#')
                ans.push_back(j);
        }
    }
    reverse(ans.begin(), ans.end());
    for (int j = 0; j < a; j++)
        cout << ans[j] << " ";
}
int main()
{
    ll k;

    cin >> k;
    while (k--)
    {

        solve();
        cout << endl;
    }

    return 0;
}