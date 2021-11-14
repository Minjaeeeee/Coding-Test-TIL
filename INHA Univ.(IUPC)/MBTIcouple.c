#include <stdio.h>

int main(void)
{
    char n[5]={'\0'};
    int i;
    char arr[5]={'\0'}; 
    char mbti[5]={'\0'};
    for(i=0; i<=3; i++)
    {
        scanf("%c",&n[i]); 
    }
    mbti[0]=n[0];
    mbti[1]=n[1];
    mbti[2]=n[2];
    mbti[3]=n[3];
   
    while(1)
    {
       if(mbti[0]=='E'|| mbti[0]=='I') //mbti 첫번째 글자 E 외향인지 I 내향인지!
       {
           if(n[0]=='E')
           {
            mbti[0]='\0';
            mbti[0]='I';
            arr[0]=mbti[0];
           }
           
           else 
           {
            mbti[0]='\0';
            mbti[0]='E';
            arr[0]=mbti[0];
           }
       }
       
       
       if(mbti[1]=='S' || mbti[1]=='N') //S 감정형인지 N 현실직시형인지! MBTI의 2번째 글자
       {
           if(mbti[1]=='S')
           {
            mbti[1]='\0';
            mbti[1]='N';
            arr[1]=mbti[1];
           }
           
           else 
           {
            mbti[1]='\0';
            mbti[1]='S';
            arr[1]=mbti[1];
           } 
       }
    
       if(mbti[2]=='T' || mbti[2]=='F')
       {
            if(mbti[2]=='T')
           {
            mbti[2]='\0';
            mbti[2]='F';
            arr[2]=mbti[2];
           }
           
           else 
           {
            mbti[2]='\0';
            mbti[2]='T';
            arr[2]=mbti[2];
           } 
       }
       
        if (mbti[3]=='J' || mbti[3]=='P')
        {
            if(mbti[3]=='J')
           {
            mbti[3]='\0';
            mbti[3]='P';
            arr[3]=mbti[3];
           }
           
           else 
           {
            mbti[3]='\0';
            mbti[3]='J';
            arr[3]=mbti[3];
           } 
       }
    break;
    }
   
    for(i=0; i<=3; i++)
    {
        printf("%c",arr[i]);
    }
    
  return 0;
}
