#  include <stdio.h>

int main()
{
    int arr[110][110] , output[110][110];
    int i , j , k;
    int width , length , reqNum;;
    for(i = 0 ; i < 110 ; i++)
    {
        for(j = 0 ; j < 110 ; j++)
        {
            arr[i][j] = 0;
        }
    }
    scanf("%d" , &reqNum);
    for(i = 0 ; i < reqNum ; i++)
    {
        scanf("%d %d" , &length , &width);
        for(j = 1 ; j <= length ; j++)
        {
            for(k = 1 ; k <= width ; k++)
            {
                scanf("%d" , &arr[j][k]);
                output[j][k] = 0;
            }
        }
        for(j = 1 ; j <= length ; j++)
        {
            for(k = 1 ; k <= width ; k++)
            {
                if(arr[j + 1][k] == 0 || arr[j][k + 1] == 0 || arr[j - 1][k] == 0 || arr[j][k - 1] == 0)
                {
                    if(arr[j][k] == 1)
                        output[j][k] = 1;
                }
            }
        }
        for(j = 1 ; j <= length ; j++)
        {
            for(k = 1 ; k <= width ; k++)
            {
                if(output[j][k] == 1)
                    printf("0 ");
                else
                    printf("_ ");
            }
            printf("\n");
        }
        if(i < reqNum - 1)
            printf("\n");
    }
}