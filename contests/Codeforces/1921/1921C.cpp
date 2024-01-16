#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n, f, a, b;
    cin >> n >> f >> a >> b;
    unsigned long long int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i <= n ; ++i) cin >> arr[i];
    for(int i = 1; i <= n ; ++i)
    {
        // cout << "Case - " << i << ", f == " << f << endl;
        f -= ((arr[i] - arr[i-1])*a > b)?  b: (arr[i] - arr[i-1])*a;
        // cout << "Keeping of takes "<< (arr[i] - arr[i-1])*a 
                // << ", turning off takes " << b << endl;
        if(f <= 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}