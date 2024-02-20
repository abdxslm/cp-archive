#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n < 10)
        return n * (n + 1) / 2;

    int digits = log10(n);
    vector<int> a;
    a.resize(digits + 1);
    a[0] = 0, a[1] = 45;
    for (int i = 2; i <= digits; i++)
        a[i] = a[i - 1] * 10 + 45 * ceil(pow(10, i - 1));
    int divisor = ceil(pow(10, digits));
    int firstDigit = n / divisor;
    return firstDigit * a[digits] + (firstDigit * (firstDigit - 1) / 2) * divisor + firstDigit * (1 + n % divisor) + sum(n % divisor);
}
void solve()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
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