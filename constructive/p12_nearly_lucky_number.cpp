#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    long long num;
    cin >> num;

    while (num != 0)
    {
        int rem = num % 10;
        if (rem == 4 || rem == 7)
        {
            flag++;
        }

        num = num / 10;
    }

    if (flag == 4 || flag == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
