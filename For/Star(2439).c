#include<stdio.h>
int main()
{
    int N;  //입력 받을 정수
    scanf("%d", &N);  //정수 입력받기
    
    for(int i=0; i<N; i++)  //반복될 횟수
    {
        for(int j=N-i; j>1; j--)  //공백의 수
        { 
            printf(" ");
        }
        for(int k=0; k<=i; k++) //별의 수
        {
            printf("*");
        }
        printf("\n"); //줄바꿈
    }
    return 0;
}

