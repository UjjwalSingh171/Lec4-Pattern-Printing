#include<stdio.h>
int main()
{
     
    int n;
    printf("Enter the no. of lines:");        
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=(n-i) ; j>0 ; j--)
        {
           printf(" ");
        }
        for(int k = 1 ; k<=n ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}