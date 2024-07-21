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
        int res = ceil(dif / 10);
        cout << res << endl;
    }

    return 0;
}