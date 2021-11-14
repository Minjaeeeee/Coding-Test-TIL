#include <stdio.h>

int main(void)
{
    int num;
    int i;
    scanf("%d",&num);
    if(num>100000) printf("error");
    
    for(i=1; i<=num; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
