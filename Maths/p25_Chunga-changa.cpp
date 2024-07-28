#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    long long xr = x % z, yr = y % z, ans = 0, cn = 0;
    ans += (xr + yr) / z;
    if (ans >= 1)
    {

        cn = z - max(xr, yr);
    }
    ans += (x / z + y / z);
    cout << ans << " " << cn << endl;
    return 0;
}