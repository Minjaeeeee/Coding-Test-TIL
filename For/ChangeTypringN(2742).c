#include <stdio.h>

int main(void)
{
    int num;
    int i;
    scanf("%d",&num);
    if(num>100000) printf("답이 나오지 않습니다!");
    
    for(i=num; i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
