#include <stdio.h>

int main()
{
    int car[30][24] = {0} , src , dst;
    int reqNum , flag;
    int i , j , k;
    int carNum = 1;
    scanf("%d" , &reqNum);
    for(i = 0 ; i < reqNum ; i++)
    {
        scanf("%d %d" , &src , &dst);
        flag = 0;
        j = 0;
        while(1)
        {
            for(k = src - 1 ; k < dst - 1; k++)
            {
                if(car[j][k] == 1)
                {
                    j++;
                    if(j == carNum)
                        carNum++;
                    break;
                }
            }
            if(k == dst - 1)
            {
                for(k = src - 1 ; k < dst - 1 ; k++)
                {
                    car[j][k] = 1; 
                }
                break;
            }
        }
    }
    printf("%d\n" , carNum);
    /*or(i = 0 ; i < carNum ; i++)
    {
        for(j = 0 ; j < 24 ; j++)
        {
            printf("%d" , car[i][j]);
        }
        printf("\n");
    }*/
}