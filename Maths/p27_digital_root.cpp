#include <iostream>
using namespace std;
int main()
{
    long long n, k, x;
    cin >> n;
    while (n--)
    {
        cin >> k >> x;
        long long res = 9 * (k - 1) + x;
        cout << res << endl;
    }
}