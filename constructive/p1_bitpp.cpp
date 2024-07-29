#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, num = 0;
    string s;
    cin >> i;
    while (i--)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
            num++;
        else
        {

            if (s == "--X" || s == "X--")
                num--;
        }
    }
    cout << num << endl;
    return 0;
}