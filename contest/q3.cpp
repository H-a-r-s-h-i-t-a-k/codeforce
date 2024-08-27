#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

string solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
        mp[it]++;

    vector<pair<int, char>> vec;
    for (auto it : mp)
        vec.push_back({it.second, it.first});
    // sort(vec.end(), vec.begin());
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    string temp = "", ans = "";
    int sum = 0;
    for (auto it : vec)
        temp += it.second;

    int i = vec.size() - 1;
    while (i >= 0)
    {

        int req = vec[i].first - sum;
        for (int j = 0; j < req; j++)
            ans += temp;

        sum += req;
        temp.pop_back();
        i--;
    }

    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}