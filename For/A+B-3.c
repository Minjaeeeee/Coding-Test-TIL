#include <stdio.h>

int main(void)
{
	int a,b;
	int i,count;
	
	scanf("%d",&count);
	for(i=0; i<count; i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	
	
	return 0;
}

