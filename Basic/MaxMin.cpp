#include <stdio.h>

int main(void)
{
    int i,j;
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);//수를 입력한다 
    }
    int max=arr[0];
    for(i=0; i<n; i++)
    {
        if(max<=arr[i]) max=arr[i];
    }
    int min=arr[0];
    for(i=0; i<n; i++)
    {
        if(min>=arr[i]) min=arr[i];
    }
    
    printf("%d %d",min,max);
    return 0;
}
