#include<stdio.h>
int main()
{
    int N;  //�Է� ���� ����
    scanf("%d", &N);  //���� �Է¹ޱ�
    
    for(int i=0; i<N; i++)  //�ݺ��� Ƚ��
    {
        for(int j=N-i; j>1; j--)  //������ ��
        { 
            printf(" ");
        }
        for(int k=0; k<=i; k++) //���� ��
        {
            printf("*");
        }
        printf("\n"); //�ٹٲ�
    }
    return 0;
}

