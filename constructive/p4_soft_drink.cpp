#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toast = (k * l) / nl; // drink is k*l
    int salt = p / np;
    int lime = c * d;
    cout << min(toast, min(salt, lime)) / n << endl;
    return 0;
}