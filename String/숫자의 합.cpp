#include <stdio.h>

int main(void)
{
	int n;
	char num[101]={};
	int sum=0; 
	
	scanf("%d",&n);//��� �Է��� �� ������? 
	scanf("%s",&num); //�迭�� �ƽ�Ű�ڵ带 ���� �Է� �޽��ϴ�. 
	
	for(int i=0; i<n; i++)
	{
		sum+=(num[i]-48);
	}
	
	printf("%d",sum);
	
	return 0;
	
}
