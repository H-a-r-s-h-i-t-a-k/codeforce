// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string num;
//     cin >> num;
//     for(int i=0;i<num.size();i++){
//         int d=num[i]-'0';
//         if(d>)
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for (auto &digit : x)
    {
        if (digit > '4')
            digit = '9' - digit + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
    cout << x << endl;
    return 0;
}