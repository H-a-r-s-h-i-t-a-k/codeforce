#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, a = 0, b = 0, cap = 0, max_cap = 0;
    cin >> k;
    while (k--)
    {
        cin >> a >> b;

        cap = (cap - a) + b;
        if (max_cap < cap)
            max_cap = cap;
    }
    cout << max_cap << endl;
    return 0;
}