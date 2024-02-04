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
        while (j<k)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        l=0;
        while(l<=m)
        {
            printf(" ");
            l++;
        }
        i++;
        m++;
        k--;
    }
    return 0;
}