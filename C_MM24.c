#include <stdio.h>

int main()
{
    int wage , time , splited[3] = {0 , 0 , 0};
    int i = 0;
    double money = 0;
    scanf("%d %d" , &time , &wage);
    while(time > 0 && i < 3)
    {
        splited[i] = time;
        time -= 60;
        i++;
    }
    money += wage * splited[0];
    money += wage * 0.33 * splited[1];
    money += wage * 0.33 * splited[2];
    printf("%.1f\n" , money);
}