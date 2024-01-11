#include <stdio.h>

int main()
{
    int sum = 0 , i , temp[6];
    for(i = 0 ; i < 6 ; i++)
    {
        scanf("%d" , &temp[i]);
        sum += temp[i] * temp[i] * temp[i];
    }
    printf("%d\n" , sum);
}