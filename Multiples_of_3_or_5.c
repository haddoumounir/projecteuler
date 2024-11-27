#include <stdio.h>

int p_np(int num)
{
    int sum = 0;
    while (num < 1000)
    {
        if(num%3 == 0 || num%5 == 0)
        sum+=num;
        num++;
    }
    return(sum);
}
int main(void)
{
    printf("%d",p_np(1));
}
/*
Answer:  233168
Completed on Wed, 27 Nov 2024, 15:57
*/
