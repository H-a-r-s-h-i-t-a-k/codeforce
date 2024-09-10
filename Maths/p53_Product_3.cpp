#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, c = 0, mul = 1;
        scanf("%d", &num);
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0 && c < 3)
            {
                printf("%d ", i);
                mul *= i;
                c++;
            }
        }
        if (c)
            printf("\n");
        else
            printf("No\n");
        continue;
        printf("Yes\n");
    }
    return 0;
}