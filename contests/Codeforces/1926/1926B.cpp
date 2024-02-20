#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> grid[i];
    }

    int start = -1;
    int size = 0, prevSize = -1;
    bool isSquare = true;

    for(int i = 0; i < n; ++i)
    {
        int currentStart = grid[i].find('1');
        int currentEnd = grid[i].rfind('1');
        if(currentStart != -1)
        {
            if(start == -1)
            {
                start = currentStart;
                prevSize = currentEnd - currentStart + 1;
            }
            else
            {
                size = currentEnd - currentStart + 1;
                if(size != prevSize || currentStart != start)
                {
                    isSquare = false;
                    break;
                }
                prevSize = size;
            }
        }
    }
    isSquare ? cout << "SQUARE" : cout << "TRIANGLE";
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