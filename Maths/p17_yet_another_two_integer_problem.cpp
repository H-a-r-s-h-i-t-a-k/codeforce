#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int dif = abs(a - b);
        int res = ceil(dif / 10.0);
        cout << res << endl;
    }

    return 0;
}
// 1.

// while (t--)
// {
//     cin >> a >> b;
//     cout << (abs(a - b) + 9) / 10 << endl;
// }
// 2.
// while (t--)
// {
//     cin >> a >> b;
//     int dif = abs(a - b);
//     int res = ceil(dif / 10.0);
//     cout << res << endl;
// }
