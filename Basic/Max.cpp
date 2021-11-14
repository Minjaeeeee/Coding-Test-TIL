#include <stdio.h>

int main(void)
{
   int arr[9];
   int max=0;
   int i;
   int num=0;
   for(i=0; i<9; i++)
   {
       scanf("%d",&arr[i]);
   }
   
   for(i=0; i<9; i++)
   {
      if(max<arr[i]) //최댓값을 찾으면!
      {
          max=arr[i]; //그 배열을 넣고 
          num=i+1;//i값을 기입한다!
      }
   }
   
 printf("%d\n%d",max,num);
 return 0;
}
