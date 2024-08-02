#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count = 0;
    unordered_map<int, bool> mp;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {

        if (!mp[str[i]])
        {
            mp[str[i]] = true;
            count++;
        }
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}