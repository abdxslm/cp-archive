#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[6][5];
    for(int i = 0; i < n; ++i)
    {
        scanf("%s", &str[i]);
    }
    for(int i = 0; i < n ; ++i)
    {
        if (strcmp(str[i], "abc") == 0 || strcmp(str[i], "bac") == 0 || strcmp(str[i], "cba") == 0|| strcmp(str[i], "acb") == 0) 
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}