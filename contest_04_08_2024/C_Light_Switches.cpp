#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll light_switch(ll n, ll k, ll arr[], ll mx)
{
    sort(arr, arr + n);
    ll left = mx, right = mx + k - 1, ans = left;
    for (int i = 0; i < n - 1; i++)
    {
        ll diff = left - arr[i];
        ll mul = diff / (k * 2);
        ll low = mul * 2 * k + arr[i];

        if (diff % (k * 2) >= k)
            low += (k * 2);

        ll high = low + k - 1;

        left = max(low, left);
        right = min(right, high);

        if (left > right)
        {

            return -1;
        }
        ans = left;
    }

    return ans;
}
int main()
{
    ll t, n, k, mx;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll arr[n];
        mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i], mx = max(arr[i], mx);
        }
        cout << light_switch(n, k, arr, mx) << endl;
    }
    return 0;
}