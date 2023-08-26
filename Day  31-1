#include <stdio.h>
#include <stdlib.h>
int printTriangle(int n)
{
    int i,k,j;
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
            printf("*");
        for(k=1;k<=2*(n-i);k++)
            printf(" ");
            for(j=i;j>0;j--)
            printf("*");
             printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(k=2*(n-i);k>0;k--)
            printf(" ");
            for(j=1;j<=i;j++)
            printf("*");
             printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter the value:");
    scanf("%d",&N);
    printTriangle(N);
    return 0;
}
