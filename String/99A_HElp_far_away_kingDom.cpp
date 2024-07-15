// #include <iostream>
// using namespace std;

// int main()
// {
//     string num;
//     cin >> num;
//     size_t n = num.find('.');
//     if (num[n - 1] == '9')
//     {
//         cout << "GOTO Vasilisa." << endl;
//     }
//     else
//     {
//         if (num[n - 1] >= '5')
//         {
//             num[n - 1] += 1;
//         }
//         num.erase(num.begin() + n, num.end());
//         cout << num<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int dot = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
        {
            dot = i;
            break;
        }
    }
    if (str[dot - 1] == '9')
    {
        cout << "GOTO Vasilisa.";
        return 0;
    }
    if (str[dot + 1] == '5' || str[dot + 1] == '6' || str[dot + 1] == '7' ||
        str[dot + 1] == '8' || str[dot + 1] == '9')
    {
        str[dot - 1] += 1;
    }
    for (int i = 0; i < dot; i++)
    {
        cout << str[i];
    }
}