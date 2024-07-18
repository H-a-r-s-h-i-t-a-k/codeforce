#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        double a, b;
        cin >> a >> b;
        long long ans = 0;
        ans = ceil((a * b) / 2);
        cout << ans << endl;
    }
    return 0;
}
