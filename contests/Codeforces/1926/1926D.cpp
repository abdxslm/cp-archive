#include <bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned int n, num;
    cin >> n;
    multiset<unsigned int> ms;
    while (n--)
    {
        cin >> num;
        ms.insert(num);
    }
    int grps = 0;
    for (auto it = ms.begin(); it != ms.end();)
    {
        unsigned int x = *it;
        int flipped = (~x & 0x7FFFFFFF) | (x & 0x80000000);
        if (ms.count(flipped) > 0)
        {
            grps++;
            ms.erase(ms.find(flipped));
            it = ms.erase(it);
        }
        else
        {
            grps++;
            it = ms.erase(it);
        }
    }
    cout << grps << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\Run Codes\\input.txt", "r", stdin);
    freopen("D:\\Programming\\Run Codes\\output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";
    return 0;
}