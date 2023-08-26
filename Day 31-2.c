#include <stdio.h>
#include <stdlib.h>

int printSquare(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter the value:");
    scanf("%d",&N);
    if(N>=0&&N<=20)
    printSquare(N);
    else printf("Input is out of bounds");
    return 0;
}
