#include <stdio.h>

int main()
{
    int Smin , Shour , Dmin , Dhour;
    int time , temp;
    int money;
    scanf("%d %d" , &Shour , &Smin);
    scanf("%d %d" , &Dhour , &Dmin);
    time = (Dhour * 60) + Dmin;
    time = time - (Shour * 60);
    time = time - Smin;
    if(time > 240)
    {
        time -= 240;
        temp = time % 30;
        time /= 30;
        money = 280 + 60 * time;
    }
    else if(time > 120 && time <= 240)
    {
        time -= 120;
        temp = time % 30;
        time /= 30;
        money = 120 + 40 * time;
    }
    else
    {
        temp = time % 30;
        time /= 30;
        money = 30 * time;
    }
    printf("%d\n" , money);
}