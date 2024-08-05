#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, count = 1;
    string num, ans;
    cin >> k;
    cin >> num;
    int i = 0;
    while (i != k || i > k)
    {
        ans += num[i];
        i += count;
        count++;
        }
    cout << ans << endl;
    return 0;
}