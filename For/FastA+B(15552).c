#include <stdio.h>

int main(void)
{
    int t;
    int sum=0;
    int a,b;
    int i;
    
    scanf("%d",&t);
    if(t>1000000) printf("���� ������ �ʽ��ϴ�!");
    
    else
    {
        for(i=0; i<t; i++)
        {
            scanf("%d%d",&a,&b);
                if((a<1&&b<1)||(a>1000&&b>1000))
                printf("����Ҽ� �����ϴ�!");
            
            else
            {
                sum = a+b;
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
