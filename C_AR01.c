#include <stdio.h>

int main()
{
    int arr[100] , temp;
    int i = 0 , j , k;
    while(scanf("%d" , &arr[i]) != EOF)
    {
        i++;
    }
    //printf("%d\n" , i);
    for(--i ; i > 0 ; i--)
    {
        printf("%d " , arr[i]);
    }
    printf("%d\n" , arr[0]);
}