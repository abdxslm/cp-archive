#include <iostream>
using namespace std;
int main()
{
    int tc, a, b, c;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b >> c;
        if(a==b) cout << c;
        else if(b==c) cout << a;
        else if(a==c) cout << b;
        cout << endl;
    }
    return 0;
}