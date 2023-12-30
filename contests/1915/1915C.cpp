#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tc, n, a;
    unsigned long long int sum;
    unsigned long long int intRoot;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        sum = 0;
        for(int i = 0; i < n; ++i) 
        {
            cin >> a;
            sum += a;
        }
        intRoot = sqrt(double(sum));
        if(intRoot*intRoot != sum) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}