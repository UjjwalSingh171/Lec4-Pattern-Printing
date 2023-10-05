#include<stdio.h>
int main()
{
     
    int n;
    printf("Enter the no. of lines:");        
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=n-i ; j>0 ; j--)
        {
            printf(" ");
        }
        for(int k=i ; k>0 ; k--)
        {
            printf("*");
        }
        for(int m=0 ; m<=i-2 ; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}