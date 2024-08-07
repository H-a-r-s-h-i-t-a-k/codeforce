#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void number_board(int n, multiset<int> board)
{
    vector<pair<int, int>> ans;
    int r = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        auto it = board.end();
        it--;
        int a = *it;
        board.erase(it);
        it = board.end();
        it--;
        int b = *it;
        board.erase(it);
        int sum = (a + b + 1) / 2;
        board.insert(sum);

        ans.push_back(make_pair(a, b));
    }
    cout << *board.begin()  << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        multiset<int> board;
        for (int i = 1; i <= n; i++)
            board.insert(i);

        number_board(n, board);
    }

    return 0;
}