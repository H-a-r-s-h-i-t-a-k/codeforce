#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> ans;

        int j = n, len = n * 4, mx = 0;
        if (n == 1)
        {
            int corr = 65;
            for (int i = 0; i < 4; i++)
            {
                if (int(ans[i]) == corr)
                    mx++;
                corr++;
            }
        }
        else
        {

            int corr = 65;
            char c;
            for (int i = 0; i < len; i++)
            {

                c = ans[i];
                if (corr > 68)
                {
                    corr = 65;
                    j = n;
                }
                if (int(c) == corr)
                {

                    mx++;
                }
                else if (int(c) == 63)
                    mx = mx;

                if (j > 0)
                {

                    j--;
                }
                if (j == 0)
                {

                    corr++;
                    j = n;
                }
            }
        }

        cout << mx << endl;
    }
    return 0;
}