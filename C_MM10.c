#include <stdio.h>

int main()
{
    float Cel , Fer;
    scanf("%f" , &Cel);
    Fer = Cel * 9 / 5;
    Fer = Fer + 32;
    printf("%.1f\n" , Fer);
}