#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n, m, k, num;
	cin >> n >> m >> k;
	int aRem = k/2, bRem = k/2;
	unordered_multiset<int> a, b;
	for(int i = 0; i < n; ++i) 
	{
		cin >> num;
		a.insert(num);
	}
	for(int i = 0; i < m; ++i) 
	{
		cin >> num;
		b.insert(num);
	}
	vector<int> remaining;
	for(int i = 1; i <= k; ++i)
	{
		if((a.count(i) && aRem) && (b.count(i) && bRem))
		{
			// cout << "r, ";
			remaining.push_back(i);
		}
		else if(a.count(i) && aRem)
		{
			a.erase(i);
				aRem--;
		}
		else if(b.count(i) && bRem)
		{
			b.erase(i);
				bRem--;
		}
		// cout << "i = " << i << ", aRem = " << aRem << ", bRem = " << bRem << endl; 
	}
	for(auto i: remaining)
	{
		if((a.count(i) && aRem) && (b.count(i) && bRem))
		{
			if(aRem >= bRem)
			{
				a.erase(i);
				aRem--;
			}
			else
			{
				b.erase(i);
				bRem--;
			}
		}
		else if(a.count(i) && aRem)
		{
			a.erase(i);
				aRem--;
		}
		else if(b.count(i) && bRem)
		{
			b.erase(i);
				bRem--;
		}
		// cout << "i = " << i << ", aRem = " << aRem << ", bRem = " << bRem << endl; 
	}
	if(aRem || bRem) cout << "NO" << endl;
	else cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\Run Codes\\input.txt",  "r",  stdin);
    freopen("D:\\Programming\\Run Codes\\output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";
    return 0;
}