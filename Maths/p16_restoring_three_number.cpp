#include <bits\stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int sum = max(max(arr[0], arr[1]), max(arr[2], arr[3]));
    for (int i = 0; i < 4; i++)
    {
        if (sum == arr[i])
        {
            continue;
        }
        cout << sum - arr[i] << " ";
    }
    return 0;
}