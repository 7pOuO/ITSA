#include <stdio.h>
#include <math.h>

int main()
{
    int dist;
    scanf("%d" , &dist);
    float ans;
    ans = dist / 23.8 * 100;
    dist = ceil(ans);
    printf("%d\n" , dist);
}