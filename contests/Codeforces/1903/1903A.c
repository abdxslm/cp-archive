#include <stdio.h>
int main()
{
    int t, n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int j = 0; j < n; ++j)
            scanf("%d", &arr[j]);
        if (k != 1)
            printf("YES\n");
        else
        {
            int decFlag = 0;
            for (int j = 0; j < n - 1; ++j)
            {
                if (arr[j] > arr[j + 1]) 
                {
                    decFlag = 1;
                    break;
                }
            }
            if (decFlag == 0) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}