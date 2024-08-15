#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x == 1 && y > 1)
        {
            cout << "No" << endl;
        }
        else if (x <= 3 && y > 3)
            cout << "NO" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}