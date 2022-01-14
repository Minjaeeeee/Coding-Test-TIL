#include <stdio.h>

int main(void)
{
	int ten,one;
	int num=0;  
	int sik=0;
	int arr[10040]={0}; //9999까지 전부 받으려면 끝이 10036에서 끝나므로 배열을 더 만들어 주었습니다.
	int thu=0,hund=0;
	
	
	for(int i=1; i<=10000; i++)
	{
		num++; //자연수를 계속해서 더해서 값을 던져줍니다.

		if(num<100)
		{
		ten = num/10; 
		one = num%10; 
		sik = num+ten+one; //셀프넘버의 식대로 각각자리의 수를 더해야하기 때문에 전부 다 해주었습니다.
		arr[sik]=1;
		}

		else if(num<1000)
		{
			hund = num / 100;
			ten = (num%100)/10;
			one = (num%10)/1;
			sik = num + hund + ten + one;
			arr[sik]=1;
		} 

		else
		{
			thu=num/1000;
			hund=(num%1000)/100;
			ten=(num%100)/10;
			one=(num%10)/1;
			sik = num + thu + hund + ten + one;
			arr[sik]=1;
		}
	} //arr까지는 정상적으로 출력이 된다. 10000넘게 잘 출력이 완료함.
	
	//1이 아닌 공간만 찾으면 되기 때문에 그 공간만 찾아서 출력을 해줍니다
	//방 호수를 출력해오는 방법입니다.

	for(int i=1; i<=10000; i++)
	{
		if(arr[i]==0)
		printf("%d\n",i);
	}
	
}
