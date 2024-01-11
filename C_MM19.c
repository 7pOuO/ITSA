#include <stdio.h>

int main()
{
    int time;
    int i;
    double money;
    scanf("%d" , &time);
    if(time >= 1500)
    {
        money = 0.711 * time;
    }
    else if(time > 800 && time < 1500)
    {
        money = 0.81 * time;
    }
    else
    {
        money = 0.9 * time;
    }
    printf("%.1f\n" , money);
}