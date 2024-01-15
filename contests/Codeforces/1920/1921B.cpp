#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, f1mm = 0, f0mm = 0, days = 0;
    cin >> n;
    string s, f;
    cin >> s;
    cin >> f;
    // s1 = count(s, s+n, '1');
    // f1 = count(f, f+n, '1');
    for(int i = 0; i < n; ++i)
    {
        if(f[i] == '1' && s[i] == '0') f1mm++;
        else if (f[i] == '0' && s[i] == '1') f0mm++;
    }
    int high = max(f1mm, f0mm);
    int low = min(f1mm, f0mm);
    days = low;
    high -= low;
    days += high;
    cout << days << endl;

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