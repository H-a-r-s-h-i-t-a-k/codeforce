#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;

        ll doll = min(x, y);
        ll firstop = (x + y) * a;
        ll large = max(x, y);
        ll zero = doll * b + (large - doll) * a;
        cout << min(firstop, zero) << endl;
    }
    return 0;
}