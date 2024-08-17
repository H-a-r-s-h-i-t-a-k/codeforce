#include <iostream>
using namespace std;
int main()
{
    string ans;
    cin >> ans;
    cout << ans;
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}