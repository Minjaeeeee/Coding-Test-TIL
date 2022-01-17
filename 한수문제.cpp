#include <stdio.h>


int main(void)
{
    int hund=0,ten=0,one=0; 
    int count=99; 
    int num; 
    int minus1=0,minus2=0;

    scanf("%d",&num); 
    
    if(num<100) 
	{
		printf("%d",num);
	}



    for(int i=100; i<=num; i++)
    {
       
        if(i>=100 && i<1000)
        {
            hund = i/100; 
            ten = (i%100)/10;
            one = (i%10)/1;
			
			minus1 = hund-ten;
			minus2 = ten-one;
			

            if(hund-ten<0 || ten-one<0)
            {
                if(hund-ten<0)
                {
                    minus1 = -(hund-ten);
                }

                else if(ten - one <0)
                {
                	minus2 = -(ten-one);
				}
				
				else continue;
            }


            if(minus1==minus2) count++;
        }
        
        if(i==num) 
        {
        	printf("%d",count);
        	break;
		}
    }

    
    return 0;
}



















