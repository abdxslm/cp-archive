#include <iostream>

int main()
{
    using namespace std;
    int a, b, tc;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        int max = (a>b)? a:b;
        cout << max << endl;
    }
    return 0;
}