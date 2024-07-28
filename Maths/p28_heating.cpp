#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum, c;
    cin >> n;
    while (n--)
    {
        cin >> c >> sum;
        long long d = sum / c, rem = sum % c;
        cout << rem * (d + 1) * (d + 1) + (c - rem) * d * d << endl;
    }
    return 0;
}