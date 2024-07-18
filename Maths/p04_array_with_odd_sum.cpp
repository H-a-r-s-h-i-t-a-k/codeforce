#include <iostream>

using namespace std;
int main()
{
    int t, num, odd, even;
    int arr[10000];
    cin >> t;

    while (t--)
    {
        odd = 0, even = 0;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                odd++;
            else
                even++;
        }
        if (odd & 1 || (odd > 0 && even > 0))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
    // 5 2 2 3 4 2 2 8 8 3 3 3 3 4 5 5 5 5 4 1 1 1 1
}
