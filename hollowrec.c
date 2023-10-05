#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of stars in breadth:");        
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++)
    {
        for (int j = 1 ; j<=(n+2) ; j++)
        {
            if(i==1 || i==n)
            printf("* "); 
        }
        if(i>1 && i<n)
        {
            printf("* ");
            for(int k = 1 ; k<=n ; k++)
            {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }  
}