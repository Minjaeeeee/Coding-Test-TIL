#include<stdio.h>

int main()
{
   int n,x,a;//x는 이제 그 걸러내는 역할 
   int i;
   scanf("%d%d",&n,&x);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a<x) printf("%d ",a);
    }
    
}

