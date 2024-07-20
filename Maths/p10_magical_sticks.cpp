#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int stick = 0;
        cin >> n;
        stick = n / 2;
        if (n % 2 == 1)
            stick++;

        cout << stick << endl;
    }
}