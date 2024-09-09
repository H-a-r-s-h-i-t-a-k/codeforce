#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        vector<char> str;

        string st;
        cin >> st;

        if (st.size() <= 2)
        {
            char first = st[0];
            if (st.size() == 2)
            {
                if (st[0] == st[1])
                {

                    first = st[1];
                    printf("%c", st[0]);
                }
                else
                {
                }
                printf("%c%c\n", st[0], st[1]);
                continue;
            }
            printf("%c%c\n", static_cast<char>(first + 1), st[0]);
            continue;
        }
        printf("%c%c", st[0], st[1]);
        for (int i = 2; i <= st.size(); i++)
        {
            if (st[i - 1] == st[i])

            {
                char element = st[i];
                printf("%c", static_cast<char>(element + 1));
            }
            printf("%c", st[i]);
        }
        cout << "\n";
    }

    return 0;
}