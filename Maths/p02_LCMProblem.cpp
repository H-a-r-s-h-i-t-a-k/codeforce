#include <iostream>
using namespace std;
int main()
{
    int total, left, right, x, y;
    cin >> total;
    while (total--)
    {
        cin >> left >> right;

        x = left;
        y = 2 * left;
        if (y <= right)
        {
            cout << x << " " << y << endl;
        }
        else

            cout << -1 << " " << -1 << endl;
    }
    return 0;
}

// 4 1 1337 13 69 2 4 88 89