#include <stdio.h>

int main(void)
{
    int hour,min;
    int sum;
    
    scanf("%d%d",&hour,&min);
    if((hour<0&&hour>23)&&(min<0&&min>59)) printf("error");
    
     else if(min-45<0)
    {
        if(hour==0)
        {
            hour=24;
        }
        hour-=1;
        sum=45-min;
        min=0;
        min=60-sum;  
    }
    
   else min-=45;//45분을 줄입니다!
   printf("%d %d",hour,min);
   return 0;
}