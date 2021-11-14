#include <stdio.h>

int main(void)
{
    int num;
    int i;
    scanf("%d",&num);
    if(num<1||num>9) printf("error");
    
    else
    {
        for(i=1; i<=9; i++)
        {
            printf("%d * %d = %d\n",num,i,num*i);
        }
    }
    return 0;
}