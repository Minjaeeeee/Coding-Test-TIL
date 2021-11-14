#include <stdio.h> 
int main(void) 
{ 
    int a, b; 
    scanf("%d %d", &a, &b); 
    if((a<-10000)||(b>10000)) printf("답이 나오지 않습니다."); 
     
    if(a > b) printf(">\n");
    else if(a < b) printf("<\n"); 
    else printf("==\n"); 
         
    return 0; 
}

