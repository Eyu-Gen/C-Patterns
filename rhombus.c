#include <stdio.h>
int main()
{
    int i,j,k,n,m;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    i=0;
    m=n-1;
    while(i<n)
    {
        j=0;
        while(j<m)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        k=0;
        while(k<=i)
        {
            printf(" ");
            k++;
        }
        i++;
    }
    return 0;
}