#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int xr = x % z, yr = y % z;
    cout << (x + y) / z << " " << min((z - xr), (z - yr)) << endl;
}