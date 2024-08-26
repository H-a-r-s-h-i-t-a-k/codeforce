#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == s[n - 1])
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}