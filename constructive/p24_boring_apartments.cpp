#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, k;
    cin >> k;
    while (k--)
    {

        cin >> num;
        int digit, i = 0, sum = 0;
        while (num != 0)
        {
            digit = num % 10;
            num /= 10;
            i++;
            sum = sum + i;
        }

        cout << (digit - 1) * 10 + sum << endl;
    }

    return 0;
}