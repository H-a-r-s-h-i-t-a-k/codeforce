#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string str;
        cin >> str;
        if (n < 2)
        {
            cout << "No" << endl;
            continue;
        }
        if (str[0] == str[n - 1])
        {
            cout << "no" << endl;
            continue;
        }
        cout << "yes" << endl;
    }

    return 0;
}