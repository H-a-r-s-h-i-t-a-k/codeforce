#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, v;
    bool flag = true;
    cin >> k;
    while (k--)
    {
        cin >> v;
        if (v == 1)
            flag = false;
    }
    if (!flag)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}