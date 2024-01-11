#include <stdio.h>

int main()
{
    int arr[6];
    int i = 0;
    for(i = 0 ; i < 6 ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    while(i > 1)
    {
        printf("%d " , arr[i - 1]);
        i--;
    }
    printf("%d\n" , arr[0]);
}