#include <stdio.h>

int main()
{
    int num , numArr[10] , temp = 0;
    int i = 0;
    scanf("%d" , &num);
    int storage = num;
    while(num != 0)
    {
        numArr[i] = num % 10;
        num /= 10;
        i++;
    }
    int length = i;
    for(i = 0 ; i < length ; i++)
    {
        temp += numArr[i] * numArr[i] * numArr[i];
    }
    if(temp == storage)
        printf("Yes\n");
    else
        printf("No\n");
}