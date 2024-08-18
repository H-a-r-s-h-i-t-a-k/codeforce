#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll c = n / k;
        if (c >= m)
            cout << m << endl;
        else
        {
            ll rem = m - c;
            ll second = ceil(1.0 * rem / (k - 1));

            cout << c - second << endl;
        }
    }

    return 0;
}
