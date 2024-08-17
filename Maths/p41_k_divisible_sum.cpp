#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    double n, k;
    while (t--)
    {
        cin >> n >> k;
        ll f = ceil(n / k);
        k *= f;
        int res = ceil(k / n);
        cout << res << endl;
    }
}