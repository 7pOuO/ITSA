#include <stdio.h>

int main()
{
    int num , i, flag = 0 , end;
    scanf("%d" , &num);
    if(num == 1)
    {
        printf("NO\n");
        return 0;
    }
    for(i = 2 ; num >= i * i ; i++)
    {
        if(num % i == 0 && num != i)
        {
            printf("NO\n");
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("YES\n");
}