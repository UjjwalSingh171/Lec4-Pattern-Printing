#include<stdio.h>
int main()
{
     for(int i = 1; i<=5 ; i++)
     {
        for(int j = 1 ; j<=i ; j++)
        {
            if(i%2!=0)
            {
                printf("%d",j);
            }
            else printf("%c",64+j);
        }
        printf("\n");
     }
}