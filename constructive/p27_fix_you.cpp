#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char str[n + 1][m + 1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> str[i][j];
        }
        int r = 0, d = 0;

        for (int i = 1; i <= n; i++)
        {
            if (str[i][m] == 'R')
                r++;
        }
        for (int j = 1; j <= m; j++)
        {
            if (str[n][j] == 'D')
                d++;
        }

        cout << d + r << endl;
    }
    return 0;
}