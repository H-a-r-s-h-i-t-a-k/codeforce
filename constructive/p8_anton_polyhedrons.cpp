#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    int k, sum = 0;
    string v;
    cin >> k;
    while (k--)
    {
        cin >> v;
        sum += mp[v];
    }
    cout << sum << endl;

    return 0;
}