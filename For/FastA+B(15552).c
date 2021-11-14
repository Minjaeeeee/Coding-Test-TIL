#include <stdio.h>

int main(void)
{
    int t;
    int sum=0;
    int a,b;
    int i;
    
    scanf("%d",&t);
    if(t>1000000) printf("답이 나오지 않습니다!");
    
    else
    {
        for(i=0; i<t; i++)
        {
            scanf("%d%d",&a,&b);
                if((a<1&&b<1)||(a>1000&&b>1000))
                printf("출력할수 없습니다!");
            
            else
            {
                sum = a+b;
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
