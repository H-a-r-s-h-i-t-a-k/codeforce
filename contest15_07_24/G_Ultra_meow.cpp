#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

int add(int a, int b)
{
    if (a + b >= mod)
        return a + b - mod;
    return a + b;
}

int sub(int a, int b)
{
    if (a < b)
        return a + mod - b;
    return a - b;
}

int mul(int a, int b)
{
    return (int)((1ll * a * b) % mod);
}

int binpow(int a, int pw)
{
    int b = 1;
    while (pw)
    {
        if (pw & 1)
            b = mul(b, a);
        a = mul(a, a);
        pw >>= 1;
    }
    return b;
}

int inv(int a)
{
    return binpow(a, mod - 2);
}

const int N = 15000;
int f[N], r[N];

void precalc()
{
    f[0] = 1;
    for (int i = 1; i < N; i++)
        f[i] = mul(f[i - 1], i);
    r[N - 1] = inv(f[N - 1]);
    for (int i = N - 2; i > -1; i--)
        r[i] = mul(r[i + 1], i + 1);
}

int C(int n, int k)
{
    if (n < 0 || k < 0 || n < k)
        return 0;
    return mul(f[n], mul(r[k], r[n - k]));
}

inline void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int k = 1; k <= n; k++)
    {
        if (2 * k >= n)
        {
            ans = add(ans, mul(2 * k + 1, C(n, k)));
            continue;
        }
        for (int m = k + 1; m <= 2 * k + 1; m++)
        {
            int c = mul(C(m - 1, m - 1 - k), C(n - m, 2 * k + 1 - m));
            ans = add(ans, mul(mul(C(m - 1, m - 1 - k), C(n - m, 2 * k + 1 - m)), m));
        }
    }
    cout << ans << '\n';
}

signed main()
{
    int T = 1;
    cin >> T;
    precalc();
    while (T--)
        solve();
    return 0;
}