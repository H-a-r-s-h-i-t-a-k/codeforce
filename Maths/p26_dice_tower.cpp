#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long num;
    cin >> t;
    while (t--)
    {
        cin >> num;
        if (num > 14 && num % 14 >= 1 && num % 14 <= 6)
        {
            cout << "YES   " << endl;
        }
        else
            cout << "NO    " << endl;
    }
    return 0;
}
