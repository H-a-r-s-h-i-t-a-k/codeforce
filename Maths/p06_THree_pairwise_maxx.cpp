#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<int> arr(3);

    cin >> t;
    while (t--)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        if (arr[1] == arr[2])
        {
            cout << "YES" << endl;
            cout << arr[2] << " " << arr[0] << " " << arr[0] << endl;
            ;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}