#include <stdio.h>

int main()
{
    int num ;
    int i , j , k;
    int flag = 0;
    scanf("%d" , &num);
    for(i = num - 1 ; i > 0 ; i--)
    {
        flag = 1;
        j = 2;
        while(j * j <= i)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
            j++;
        }
        if(flag == 1)
            break;
    }
    printf("%d\n" , i);
}