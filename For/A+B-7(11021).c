#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int a,b;
    
    scanf("%d",&n);
    
    
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a<0||b>10) printf("답이 나오지 않습니다!");
        printf("Case #%d: %d\n",i,a+b);
    }
    return 0;
}
