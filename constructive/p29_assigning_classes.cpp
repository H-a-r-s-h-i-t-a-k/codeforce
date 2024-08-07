#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

               vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> a[i];
        sort(begin(a), end(a));
        int res = abs(a[n] - a[n - 1]);
        cout << res << endl;
    }
    return 0;
}