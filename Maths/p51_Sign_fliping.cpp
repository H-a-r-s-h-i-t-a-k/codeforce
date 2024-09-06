#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iomanip>
#include <cassert>
#include <cstring>
#include <sstream>
#include <numeric>
#include <cstdio>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

#define pb push_back
#define F first
#define S second
#define _sz(x) ((int)x.size())

int T;

const int N = 1e5 + 20;
int n, a[N];

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> T;

    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int z = abs(a[i]);
            if (i & 1)
                z *= -1;

            cout << z << ' ';
        }
        cout << '\n';
    }
}
