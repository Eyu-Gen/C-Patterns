#include <stdio.h>
int main()
{
    int i,j,k,n,m;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    m=n;
    i=0;
    while (i<n)
    {
        j=0;
        while (j<m)
        {
            printf("* \t");
            j++;
        }
        printf("\n");
        k=0;
        while(k<=i)
        {
            printf("\t");
            k++;
        }
        i++;
        m--;
    }
    return 0;
}