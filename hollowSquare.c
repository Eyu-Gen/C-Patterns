#include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    m=n-1;
    i=0;
    while(i<n)
    {
        if (i==0 || i==m )
        {
            j=0;
            while (j<=m)
            {
                printf("* ");
                j++;
            }
        }
        else
        {
            j=0;
            while (j<=m)
            {
                if (j==0 || j==m)
                {
                    printf("* ");
                    j++;
                }
                else
                {
                    printf("  ");
                    j++;
                }
            }
            
        }
        i++;
        printf("\n");
    }
    return 0;
}

