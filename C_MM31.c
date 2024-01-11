#include <stdio.h>

int main()
{
    int num , i , ans = 0;
    scanf("%d" , &num);
    for(i = 1 ; i <= num ; i++)
    {
        if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0)
        {
            ans += i;
        }
    }
    printf("%d\n" , ans);
}