#include <stdio.h>

int main()
{
    float height , upper , lower;
    scanf("%f %f %f" , &upper , &lower , &height);
    float ans = (upper + lower) * height;
    ans /= 2;
    printf("Trapezoid area:%.1f\n" , ans);
}