#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t_card, p_card;
    bool ans = false;
    cin >> t_card;
    for (int i = 0; i < 5; i++)
    {
        cin >> p_card;
        if (t_card[0] == p_card[0] || t_card[0] == p_card[1] || t_card[1] == p_card[0] || t_card[1] == p_card[1])
        {
            ans = true;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}