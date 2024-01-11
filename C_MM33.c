#include <stdio.h>

int main()
{
    int num , i , j , k , temp;
    scanf("%d" , &num);
    for(i = 2 ; i <= num ; i++)
    {
        if(i == 6)
        {
            printf("6");
            continue;
        }
        temp = 0;
        for(j = 1 ; j < i ; j++)
        {
            if(i % j == 0)
            {
                temp += j;
            } 
        }
        if(temp == i)
            printf(" %d" , temp);
    }
    printf("\n");
}