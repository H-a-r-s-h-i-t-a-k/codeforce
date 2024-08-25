#include <iostream>
using namespace std;
typedef long long ll;
ll max_min(ll a)
{
    ll mx = -1, mn = 10;
    while (a > 0)
    {
        ll d = a % 10;
        mx = max(d, mx);
        mn = min(mn, d);
        a /= 10;
    }
    return mn * mx;
}
int main()
{
    ll t, a, k, next;
    cin >> t;
    while (t--)
    {
        cin >> a >> k;
        while (--k)
        {

            ll next = a + max_min(a);
            if (next == a)
                break;
            a = next;
        }
        cout << a << endl;
    }

    return 0;
}