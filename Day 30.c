#include <stdio.h>
#include <stdlib.h>
int printTriangle(int n)
{
    int i,j;
    char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
            printf("%c",a[j]);
            printf("\n");
    }
}

int main()
{
    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    printTriangle(N);
    return 0;
}

