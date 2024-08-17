#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.size(), n2 = s2.size();
        int lcm = (n1 * n2) / gcd(n1, n2);

        string r1 = "", r2 = "";
        for (int i = 0; i < lcm / n1; i++)
            r1 += s1;
        for (int i = 0; i < lcm / n2; i++)
            r2 += s2;
        if (r1 == r2)
            cout << r2 << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}