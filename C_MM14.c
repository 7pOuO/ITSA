#include <stdio.h>

int main()
{
    int inp;
    int day , hour , min , sec;
    scanf("%d" , &inp);
    day = inp / 86400;
    inp %= 86400;
    hour = inp /3600;
    inp %= 3600;
    min = inp / 60;
    sec = inp % 60;
    printf("%d days\n" , day);
    printf("%d hours\n" , hour);
    printf("%d minutes\n" , min);
    printf("%d seconds\n" , sec);
}