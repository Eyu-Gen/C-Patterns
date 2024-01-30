#include <stdio.h>
int main()
{
    int i,j,l,k,n,m;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    k=n;
    m=i=0;
    while (i<n)
    {
        j=0;
        while(j<k-1)
        {
            printf("\t");
            j++;
        }
        l=0;
        while (l<=m)
        {
            printf("*\t");
            l++;
        }
        printf("\n");
        m+=2;
        k--;    
        i++;    
    }
    return 0;
}