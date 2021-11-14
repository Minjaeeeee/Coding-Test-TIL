#include<stdio.h>

int main(void)
{
    int i,j;
    int n;
    scanf("%d",&n);
    if(n<1||n>100) printf("답이 나오지 않습니다!");
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

