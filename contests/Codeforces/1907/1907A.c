#include<stdio.h>
#include<string.h>
int main()
{
    int tc;
    char square[3];
    scanf("%d", &tc);
    for(int caseNo = 0; caseNo < tc; ++caseNo)
    {
        scanf("%s", square);
        for(int i = 1; i <=8; ++i)
        {
            if(i == (int)square[1]-(int)'0') continue;
            printf("%c%d\n", square[0], i);
        }
        for(char i = 'a'; i <='h'; ++i)
        {
            if(i == square[0]) continue;
            printf("%c%c\n", i, square[1]);
        }
    }
}