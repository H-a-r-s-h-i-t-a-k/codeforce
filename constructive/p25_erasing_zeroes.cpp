#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, num;

    bool flag = false;
    cin >> k;
    while (k--)
    {
        int count = 0;
        cin >> num;
        while (num != 0)
        {
            int digit = num % 10;
            if (digit == 1)
                flag = true;
            if (flag)
            {
                if (digit == 0)
                    count++;
                        }
            num /= 10;
        }
        cout << count << endl;
    }

    return 0;
}