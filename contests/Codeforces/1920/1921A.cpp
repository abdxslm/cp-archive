#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<pair<int, int>> v(4);
    for(int i = 0; i < 4; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int DA = v[1].second - v[0].second;
    int AB = v[3].first - v[1].first;
    cout << DA*AB << endl;
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