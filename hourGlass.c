#include <stdio.h>
int main()
{
    int i,j,k,n,m,o;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    o=m=n/2;
    i=0;
    while(i<=m)
    {
        j=0;
        while(j<=o)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        if (i==m)
        {
            break;
        }        
        k=0;
        while(k<=i)
        {
            printf(" ");
            k++;
        }
        i++;
        o--;
    }
    o=m;
    i=0;
    while(i<m)
    {
        k=0;
        while(k<=o-2)
        {
            printf(" ");
            k++;
        }
        j=0;
        while(j<=i+1)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
        o--;
    }
}