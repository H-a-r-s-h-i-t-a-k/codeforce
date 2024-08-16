#include <iostream>
using namespace std;
typedef long long ll;
bool check_even1(ll r, ll g, ll b, ll w)
{
    return ((r % 2 + g % 2 + b % 2 + w % 2) > 1) ? false : true;
}
int main()
{
    ll t, r, g, b, w;
    cin >> t;
    while (t--)
    {
        cin >> r >> g >> b >> w;
        if (check_even1(r, g, b, w))
            cout << "Yes" << endl;
        else if (r > 0 && g > 0 && b > 0 && check_even1(r - 1, g - 1, b - 1, w + 1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}