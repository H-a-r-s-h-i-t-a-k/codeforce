#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, c, xsum(0), ysum(0), zsum(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        xsum += a;
        ysum += b;
        zsum += c;
    }
    if ((xsum == ysum) && (zsum == 0))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}