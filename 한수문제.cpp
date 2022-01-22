#include <stdio.h>


int main(void)
{
    int hund=0,ten=0,one=0; 
    int count=99; //1부터 99까지는 전부 한수이기 때문이다. 
    int num; 
    int minus1=0,minus2=0;

    scanf("%d",&num); 
    
    //이쪽은 정상출력된다. 
    
    if(num<100) //100이하는 전부 한수이므로 100이하는 전부 출력하기 
	{
		printf("%d",num); 
		return 0;
	}
	
	else if(num==1000)
	{
		printf("%d",144);
		return 0;
	}
	
	else
	{
		for(int i=100; i<=num; i++) //210이면 100부터 210까지 돌린다. 
		{
			hund = i/100; 
			ten = (i%100)/10;
			one = (i%10)/1;
			
			minus1 = hund - ten;
			minus2 = ten - one;
			
			if(minus1 == minus2) 
			{
				count++; 
			}
		}
	}
	printf("%d",count);
	return 0;
}





















