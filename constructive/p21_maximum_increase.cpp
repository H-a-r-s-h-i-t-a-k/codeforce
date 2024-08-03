#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long ar[n], v, count = 1, mcount = 1;
    cin >> ar[0];
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            cin >> v;
            ar[i] = v;
            if (v > ar[i - 1])
            {
                count++;
                mcount = max(mcount, count);
            }
            else
            {
                count = 1;
            }
        }
    }
    cout << mcount << endl;
    return 0;
}