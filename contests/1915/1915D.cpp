#include <iostream>
using namespace std;
int main()
{
    int tc, n, i;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        char str[n+1];
        char cv[n+1];
        cin >> str;
        for (i = 0; i <= n; ++i)
        {
            if (str[i] == 'b' || str[i] == 'c' || str[i] == 'd')
                cv[i] = 'c';
            else if (str[i] == 'a' || str[i] == 'e')
                cv[i] = 'v';
            else
                cv[i] = str[i];
        }
        i = 0;
        while (i < n)
        {
            if(i != 0) cout << '.';
            if (cv[i] == 'c' && cv[i + 1] == 'v' && cv[i + 2] == 'c' && (cv[i+3] == 'c'|| cv[i+3]=='\0'))
            {
                cout << str[i] << str[i + 1] << str[i + 2];
                i += 3;
            }
            else if (cv[i] == 'c' && cv[i + 1] == 'v')
            {
                cout << str[i] << str[i + 1];
                i += 2;
            }
        }
        cout << endl;
    }
    return 0;
}