#include <stdio.h>

int main()
{
    int num , i , j;
    scanf("%d" , &num);
    for(i = 1 ; i < num ; i++)
    {
        if(num % i == 0)
        {
            printf("%d " , i);
        }
    }
    printf("%d\n" , num);
}