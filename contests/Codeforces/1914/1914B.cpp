#include <iostream>
int main()
{
    using namespace std;
    int t, k, n, num;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        num = n - k;
        for (int i = n - k; i > 0; --i)
            cout << i << " ";
        for (int i = n - k + 1; i <= n; ++i)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}