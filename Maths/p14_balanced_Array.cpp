#include <bits\stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long half = n / 2;

        if (half % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            long long j = 2;
            for (long long i = 1; i <= half; i++)
            {
                cout << j << " ";
                j += 2;
            }
            long long val = j - 2;
            j = 1;
            for (long long i = 1; i < half; i++)
            {
                cout << j << " ";
                j = j + 2;
            }
            cout << val + half - 1 << endl;
        }
    }
    return 0;
}