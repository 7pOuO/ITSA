#include <stdio.h>

int main()
{
    int i , ans = 1;
    while(scanf("%d" , &i) != EOF)
    {
        ans = 1;
        if(i > 31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        printf("%d\n" , ans<<i);
    }
}