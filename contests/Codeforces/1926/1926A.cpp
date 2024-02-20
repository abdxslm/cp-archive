#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int aC = 0, bC = 0;
	string str;
	cin >> str;
	for(int i = 0; i < str.length(); ++i)
	{
		if(str[i] == 'A') aC++;
		else if (str[i] == 'B') bC++;
	}
	(aC > bC)? cout << "A": cout << "B";
	cout << endl;
		 
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