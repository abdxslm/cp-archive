#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    int as, bs;
    cin >> as >> bs;
    int a[as], b[bs];
    for(int i = 0; i < as; ++i) cin >> a[i];
    for(int i = 0; i < bs; ++i) cin >> b[i];
    int maximum = *max_element(b, b+bs);
    sort(a+as-1+maximum, a+as);
    for(int i = 0; i < as; ++i) cout << a[i] << ' '; 
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt",  "r",  stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
