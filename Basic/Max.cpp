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
      if(max<arr[i]) //�ִ��� ã����!
      {
          max=arr[i]; //�� �迭�� �ְ� 
          num=i+1;//i���� �����Ѵ�!
      }
   }
   
 printf("%d\n%d",max,num);
 return 0;
}
