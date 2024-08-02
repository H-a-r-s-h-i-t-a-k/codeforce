#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, v;
    cin >> k;
    int ar[k];
    for (int i = 1; i <= k; i++)
    {
        cin >> v;
        ar[v - 1] = i;
    }
    for (int i = 0; i < k; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}