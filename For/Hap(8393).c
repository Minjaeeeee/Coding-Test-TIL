#include <stdio.h>

int main(void)
{
    int num;
    int sum=0,i;
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
