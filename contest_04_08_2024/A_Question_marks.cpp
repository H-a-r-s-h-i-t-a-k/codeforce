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
        int n_ans = n * 4, a = 0, b = 0, c = 0, d = 0;
        int result = 0;
        for (int i = 0; i < n_ans; i++)
        {
            if (ans[i] == 'A')
            {
                a++;
            }
            else if (ans[i] == 'B')
            {
                b++;
            }
            else if (ans[i] == 'C')
            {
                c++;
            }
            else if (ans[i] == 'D')
            {
                d++;
            }
            else
                continue;
        }

        result = min(a, n) + min(b, n) + min(c, n) + min(d, n);
        cout << result << endl;
    }
    return 0;
}