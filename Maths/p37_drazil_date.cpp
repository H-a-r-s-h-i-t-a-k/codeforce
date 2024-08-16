#include <iostream>
using namespace std;
int main()
{
    string ans;
    cin >> ans;
    int n = ans.size(), c = 0, res = n / 2;
    if (n % 2 == 0)
    {
        cout << res;
        return 0;
    }
    for (auto i : ans)
        if (i == '1')
            c++;

    cout << res + (c > 1);

    return 0;
}