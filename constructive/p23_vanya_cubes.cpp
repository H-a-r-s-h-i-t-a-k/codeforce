#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num, cube = 1, count = 0, i = 1;
    cin >> num;
    while (cube <= num)
    {
        cube = ((i * i) + i) / 2;
        if (cube > num)
            break;

        num = num - cube;
        i++;
    }

    cout << i - 1 << endl;
    return 0;
}