#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    char score[6];
    bool hattrick = false;
    for(int i = 0; i < 6; ++i)
    {
        cin >> score[i];
    }
    for(int i = 0; i < 4; ++i)
        if(score[i] == 'W' && score[i+1] == 'W' && score[i+2] == 'W') 
        {
            hattrick = true; 
            break;
        }
    if(hattrick) cout << "YES";
    else cout << "NO";
    cout << endl;
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
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
