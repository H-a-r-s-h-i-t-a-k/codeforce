#include <bits\stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int num = 2, value = k;
    while (true)
    {
        if (value % 10 == 0)
        {
            cout << num - 1 << endl;
            break;
        }
        else if (value % 10 == r)
        {
            cout << num - 1 << endl;
            break;
        }
        value = k * num;
        num++;
    }

    return 0;
}