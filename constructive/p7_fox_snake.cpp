#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    string s1(c, '#'), s2(c, '.');
    int dir = 0; // left
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
            cout << s1 << endl;
        else
        {
            if (dir == 0)
                s2[0] = '.', s2[c - 1] = '#';
            else
                s2[c - 1] = '.', s2[0] = '#';

            cout << s2 << endl;
            dir = 1 - dir;
        }
    }
    return 0;
}