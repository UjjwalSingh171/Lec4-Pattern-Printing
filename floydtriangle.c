#include<stdio.h>
int main()
{
    int a = 1;
    int n;
    printf("Enter the no. of lines:");        
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}