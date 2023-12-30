#include <iostream>
using namespace std;
int main()
{
    char sq[3][3];
    int rowN, tc;
    bool found;
    cin >> tc;
    while (tc--)
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                cin >> sq[i][j];
                if (sq[i][j] == '?')
                {
                    rowN = i;
                }
            }
        }
        for (char i = 'A'; i <= 'C'; ++i)
        {
            found = false;
            for (int j = 0; j < 3; ++j)
            {
                if (sq[rowN][j] == i)
                {
                    found = true;
                    break;
                }
            }
            if (found == false)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}