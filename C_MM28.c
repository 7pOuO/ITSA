#include <stdio.h>

int main()
{
    int num , output = 35;
    scanf("%d" , &num);
    while(output <= num - 35)
    {
        printf("%d " , output);
        output += 35;
    }
    printf("%d\n" , output);
}