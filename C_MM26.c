#include <stdio.h>

int main()
{
    int num;
    int i , j , k;
    scanf("%d" , &num);
    for(i = 1 ; i <= num ; i++)
    {
        printf("%d*%d=%d\n" , i , i , i * i);
    }
}