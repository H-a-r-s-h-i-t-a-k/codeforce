#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        vector<int> dp(n + 2, -1);
        dp[0] = k;
        for (int i = 1; i <= n + 1; i++)
        {
            if (i != n + 1 && s[i - 1] == 'C')
                continue;
            for (int t = 1; t <= m; t++)
                if (i - t >= 0 && (i - t == 0 || s[i - t - 1] == 'L'))
                    dp[i] = max(dp[i], dp[i - t]);
            if (i > 1 && s[i - 2] == 'W')
                dp[i] = max(dp[i], dp[i - 1] - 1);
        }
        if (dp[n + 1] >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}