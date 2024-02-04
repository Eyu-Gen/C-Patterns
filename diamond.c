#include <stdio.h>
int main()
{
    int i,j,rem,n,m;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    m=rem=n/2;
    i=0;
    while(i<=rem)
    {
        j=0;
        while(j<m)
        {
            printf(" ");
            j++;
        }
        j=0;
        while(j<=i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
        m--;
    }
    i=0;
    m=rem;
    while(i<rem)
    {
        j=0;
        while(j<=i)
        {
            printf(" ");
            j++;
        }
        j=0;
        while(j<m)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
        m--;
    }
    return 0;
}