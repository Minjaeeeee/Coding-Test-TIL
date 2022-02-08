#include <stdio.h>

int main(void)
{
	int n;
	char num[101]={};
	int sum=0; 
	
	scanf("%d",&n);//몇번 입력을 할 것인지? 
	scanf("%s",&num); //배열로 아스키코드를 전부 입력 받습니다. 
	
	for(int i=0; i<n; i++)
	{
		sum+=(num[i]-48);
	}
	
	printf("%d",sum);
	
	return 0;
	
}
