#include <iostream>
#include <cmath>
using namespace std;

int floor_no(int petyaApart, int numberApart)
{
    int floor, x = numberApart, n = petyaApart;
    if (n <= 2)
        return 1;
    else
    {
        n -= 2;
        floor = ceil(1.0 * n / x) + 1;
        return floor;
    }
}

int main()
{
    int t, n, x;

    cin >> t;

    while (t--)
    {
        cin >> n >> x;
        cout << (floor_no(n, x)) << endl;
    }
    return 0;
}

// inputCopy 4 7 3 1 5 22 5 987 13 outputCopy 3 1 5 77