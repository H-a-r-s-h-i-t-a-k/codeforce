#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mtx[5][5], ans = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            int v;

            cin >> v;
            mtx[i][j] = v;
            if (v)
            {
                ans = abs(3 - (i + 1)) + abs(3 - (j + 1));
            }
        }
    }
    cout << ans << endl;

    return 0;
}