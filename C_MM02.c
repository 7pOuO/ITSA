#include <stdio.h>

int main()
{
    float side , height;
    scanf("%f %f" , &side , &height);
    printf("%.1f\n" , side * height / 2);
}