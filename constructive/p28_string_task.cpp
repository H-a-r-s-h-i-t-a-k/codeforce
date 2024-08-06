#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, ans;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'Y')
            continue;
        else
        {
            string elem = ".";
            elem += tolower(str[i]);
            ans.append(elem);
        }
    }
    cout << ans << endl;
}