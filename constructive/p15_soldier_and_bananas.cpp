#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, w, total_R = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        total_R += (i * k);
    }
    cout << abs(total_R - n) << endl;
}