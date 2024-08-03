#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    long long a, b, n;
    cin >> k;
    while (k--)
    {

        cin >> a >> b >> n;
        long long count = 0, sum = 0;

        while (sum <= n)
        {
            if (a > b)
            {
                b += a;
                sum = b;
                count++;
            }
            else
            {
                a += b;
                sum = a;
                count++;
            }
            if (sum > n)
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}