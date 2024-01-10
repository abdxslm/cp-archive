#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    int n, x, sLeft = 0;
    cin >> n >> x;
    char str[n+1];
    cin >> str;
    for(int i = 0; i < n; i++)
    {
        (str[i]=='1')? sLeft = x: sLeft--;
        if(sLeft < 0)
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
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
