#include <stdio.h>

int main(void) //윤년을 출력해보자!
{
    int year;
    scanf("%d",&year);
    if((year<1)&&(year>4000)) printf("답이 나오지 않습니다.");
    else if((year%4==0)&&((year%100!=0)||(year%400==0))) printf("1");
    else printf("0");
    
   return 0;
}