#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k, num;
    cin >> k;
    while (k--)
    {
        cin >> num;
        int digit = num % 10;
        cout << digit + (num / 10) << endl;
    }
    return 0;
}