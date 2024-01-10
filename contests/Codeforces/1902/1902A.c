#include <stdio.h>
int main()
{
    int t, n, oCount, zCount;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%d", &n);
        char str[n + 1];
        oCount = 0, zCount = 0;
        scanf("%s", str);
        for (int j = 0; str[j] != '\0' ; ++j)
        {
            if (str[j] == '1')
                oCount++;
            else
                zCount++;
        }
        if (zCount > oCount)
            printf("YES\n");
        else if (oCount == n)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}