#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, x, num, sum = 0;
    cin >> n >> k >> x;
    vector<int> arr;
    arr.reserve(n+1);
    arr.push_back(0);
    for(int  i = 0; i < n ; ++i)
    {
        cin >> num;
        arr.push_back(num);
        sum += num;
    }
    // cout << sum << endl;
    sort(arr.rbegin(),arr.rend()-1);
    // cout << "Array     --> ";
    // for(auto u : arr) cout << u << ' ';
    //     cout << endl;
    for(int i = 1; i <=n; ++i)
    {
        arr[i] = arr[i] + arr[i-1];
    }
    // cout << "Sum Array --> ";
    // for(auto u : arr) cout << u << ' ';
    // cout << endl;
    int max = -1e9;
    for(int i = 0; i <= k ; ++i)
    {
        int rtn = sum - arr[i];
        if(i+x <= n) rtn -= 2*(arr[i+x]-arr[i]);
        else rtn -= 2*(arr[n]-arr[i]);
        // cout << "if k == " << i << ", return is " << rtn << endl;
        if(max < rtn) max = rtn;
    }
    cout << max << endl;
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