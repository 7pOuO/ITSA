#include <stdio.h>

int main()
{
    int i , num , sum = 0;
    scanf("%d" , &num);
    for(i = 1 ; i <= num ; i++)
    {
        if(i % 3 == 0)
            sum += i;
    }
    printf("%d\n" , sum);
}