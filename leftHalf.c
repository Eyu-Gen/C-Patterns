#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows=");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            printf("\t");
        }

        for (j = 0; j <= i; j++) 
        {
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}
