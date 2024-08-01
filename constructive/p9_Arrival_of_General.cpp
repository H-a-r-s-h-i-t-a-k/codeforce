#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, max_v = INT_MIN, max_i = 0, min_v = INT_MAX, min_i = 0;

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int v;
        cin >> v;

        if (max_v < v)
        {

            max_v = v;
            max_i = i;
        }

        if (min_v >= v)
        {

            min_v = v;
            min_i = i;
        }
    }
    if (max_i > min_i)
        cout << (max_i - 1) + (k - min_i - 1) << endl;
    else
        cout << (max_i - 1) + (k - min_i) << endl;
    return 0;
}