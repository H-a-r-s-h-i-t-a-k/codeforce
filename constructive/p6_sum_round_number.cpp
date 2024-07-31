#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, num;
    cin >> k;

    while (k--)
    {
        int i = 0;
        vector<int> ans;
        cin >> num;
        while (num > 0)
        {
            int rem = num % 10;
            if (rem > 0)
                ans.push_back(rem * pow(10, i));
            num /= 10;
            i++;
        }
        cout << ans.size() << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}