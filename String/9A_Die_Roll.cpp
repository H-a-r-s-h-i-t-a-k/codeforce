#include <iostream>
using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;

    string probability[] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << probability[max(y, w)];
}