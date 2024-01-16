#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, a;
    cin >> n;
    priority_queue <int> a1;
    priority_queue <int, vector<int>, greater<int>> a2;
    unordered_set<int> a3;
    while(n--)
    {
        cin>> a >> x;    
        if(a == 1) a1.push(x);
        else if(a == 2) a2.push(x);
        else if(a == 3) a3.insert(x);
    }
    int inRange = 0;
    for(auto x: a3)
    {
        if(x >= a1.top() && x <= a2.top())
        {
            inRange++;
        }

    }
    if((a2.top() - a1.top() + 1 - inRange) > 0) cout << (a2.top() - a1.top() + 1 - inRange) << endl; 
    else cout << 0 << endl;
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