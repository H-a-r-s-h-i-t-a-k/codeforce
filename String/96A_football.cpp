#include <iostream>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int count = 1;

    for (int i = 1; i < num.size(); ++i)
    {
        if (num[i] == num[i - 1])
        {
            count += 1;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << "NO" << endl;

    return 0;
}