#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    string s;
    cin >> n;
    while (n--)
    {
        long long sum = 0, even = 0;
        cin >> s;

        bool zero = false;
        for (long long i = 0; i < s.size(); i++)
        {
            x = s[i] - '0';
            if (x == 0)
                zero = true;
            if (x % 2 == 0)
                even++;

            sum += x;
        }
        if (sum % 3 == 0 && even > 1 && zero)
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }
    return 0;
}