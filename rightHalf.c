#include <stdio.h>
int main()
{
    int i,n,j;

    printf("Enter the number of rows=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }
    return 0;
}