#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long n, m, a, ans;
    cin >> n >> m >> a;
    ans = ceil((double)m / a) * ceil((double)n / a);
    cout << ans << endl;
    return 0;
}