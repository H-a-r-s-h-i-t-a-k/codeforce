#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pdouble(x) fixed << setprecision(10) << x
#define inf 1e9
#define inff 1e18
#define vec vector
#define pii pair<int, int>
#define pll pair<long long, long long>
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())
#define pb push_back
#define ff first
#define ss second
#define YY cout << "YES" << endl
#define NN cout << "NO" << endl
#define c(x) cout << x << endl
#define f(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a - 1; i >= b; i--)
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) x.begin(), x.end()
#define google(i, x) cout << "Case #" << i << ": " << x << endl
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

const ll M = 1e9 + 7;

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
ll lcm(ll a, ll b)
{
    ll g = gcd(a, b);
    ll res = a * (b / g);
    return res;
}
ll extended_gcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}
ll binExp(ll a, ll b, ll m = M)
{
    a = a % m;
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
ll mod_inv(ll a, ll m = M)
{
    a = a % m;
    return binExp(a, m - 2, m);
} // only for prime m
ll mod_add(ll a, ll b, ll m = M)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m = M)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m = M)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m = M)
{
    a = a % m;
    ll binv = mod_inv(b, m);
    return (((a * binv) % m) + m) % m;
}
ll test;
ll dx[] = {-1, 1, 0, 0};
ll dy[] = {0, 0, 1, -1};

// ll ask(ll i)
// {

//     cout<<"? "<<i<<endl;
//     cout.flush();

//     ll ans;
//     cin>>ans;
//     return ans;
// }

// void give(ll a)
// {
//     cout<<"! "<<a<<endl;

//     cout.flush();
// }

void print(auto &a)
{
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
}

/****************************   C..O..D..E   ****************************/

const ll N = 2e5 + 3;

void solve()
{
    ll n;
    cin >> n;
    vec<ll> ans;
    char ch;
    f(i, 0, n)
    {
        f(j, 1, 5)
        {
            cin >> ch;
            if (ch == '#')
                ans.pb(j);
        }
    }
    reverse(all(ans));
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}

int main()
{
    fast_io;
    // fun();
    ll t = 1;
    cin >> t;
    test = 1;
    while (t--)
    {
        solve();
        test++;
    }
    return 0;
}