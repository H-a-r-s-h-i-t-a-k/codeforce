#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{

    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll i = 1, ans = a[0];
        bool turtle = true, piggy = false;
        while (i < n)
        {

            if (turtle)
            {
                ans = max(ans, a[i]);
                piggy = true;
                i++;
            }

            if (piggy)
            {
                ans = min(ans, a[i]);
                turtle = true;
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}