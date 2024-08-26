#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll ans()
{
    ll n;
    cin >> n;

    vector<ll> vec(n);
    for (auto &it : vec)
        cin >> it;

    // sort
    sort(vec.begin(), vec.end());

    return vec[n / 2];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t, n;
    cin >> t;
    while (t--)
    {
        cout << ans() << endl;
    }
    return 0;
}