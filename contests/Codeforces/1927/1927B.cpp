#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n, num;
	cin >> n;
	// printf("hi");
	char c = 'a';
	map<char, int> letters;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
        // printf("num = %d", num);
		if (num == 0)
		{
			letters.insert({c, 0});
			letters[c]++;
			cout << c;
			c++;
		}
		else
		{
			char carrier;
			for (auto x : letters)
			{
				if (x.second == num)
				{
					carrier = x.first;
					break;
				}
			}
			letters[carrier]++;
			cout << carrier ;
		}
	}
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_JUDGE
	    freopen("D:\\Programming\\Run Codes\\input.txt",  "r",  stdin);
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