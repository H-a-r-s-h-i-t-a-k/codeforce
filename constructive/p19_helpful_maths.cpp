#include <bits/stdc++.h>
using namespace std;
int main()
{
    int one = 0, two = 0, three = 0;
    string str;
    cin >> str;
    if (str.size() == 1)
    {
        cout << str;
        return 0;
    }
    for (int i = 0; i < str.size(); i += 2)
    {
        if (str[i] == '1')
            one++;
        else if (str[i] == '2')
            two++;
        else
            three++;
    }

    for (int i = 0; i < one; i++)
    {
        cout << '1';
        if ((two == 0 and three == 0) and one - 1 == i)
            cout << endl;
        else
            cout << '+';
    }
    for (int i = 0; i < two; i++)
    {
        cout << '2';
        if (three == 0 and two - 1 == i)
            cout << endl;
        else
            cout << '+';
    }
    for (int i = 0; i < three; i++)
    {
        cout << '3';
        if (three - 1 == i)
            cout << endl;
        else
            cout << '+';
    }

    return 0;
}