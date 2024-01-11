#include <stdio.h>
#include <math.h>

int main()
{
    int inp , out[8];
    int i , minus = 0;
    scanf("%d" , &inp);
    if(inp < 0)
        minus = 1;
    inp = abs(inp);
    if(minus == 1)
        inp = 256 - inp;
    for(i = 0 ; i < 8 ; i++)
    {
        out[i] = inp % 2;
        inp /= 2;
    }
    for(i = 7 ; i > -1 ; i--)
    {
        printf("%d" , out[i]);
    }
    printf("\n");
}