#include <iostream>
#include <set>
#include <vector>
using namespace std;
void solve()
{
    multiset<int> ms;
    int a, b, c;
    cin >> a >> b >> c;
    ms.insert(a);
    ms.insert(b);
    ms.insert(c);
    for(int i=0;i<5;i++){
        int x=* ms.begin();
        ms.erase(ms.begin());
        ms.insert(x+1);
    }
    vector<int>vec(ms.begin(),ms.end());
    cout<<vec[0]*vec[1]*vec[2]<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}