#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    cin >> k;
    while (k--)
    {
        int a1, a2, b1, b2, won = 0;
        cin >> a1 >> a2 >> b1 >> b2;
        int round = 0; // I st time
        if (a1 > b1)
            round++;
        if (a2 > b2)
            round++;
        if (round == 2)
            won++;

        round = 0; // II second time
        if (a1 > b2)
            round++;
        if (a2 > b1)
            round++;
        if (round == 2)
            won++;

        round = 0; // III time
        if (a2 > b2)
            round++;
        if (a1 > b1)
            round++;
        if (round == 2)
            won++;

        round = 0; // IV time
        if (a2 > b1)
            round++;
        if (a1 > b2)
            round++;
        if (round == 2)
            won++;
        // last
        cout << won << endl;
    }
    return 0;
}