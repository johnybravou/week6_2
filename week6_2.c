#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=1; j<=n ;j++)
    {
        for(int i=1; i<=n ;i++)
        {
            if( j>1 && i>1 && i!=n && j!=n)
            {
                printf(" ");
            }
            else if(j<n && i<n && i!=1 && j!=1 )
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
