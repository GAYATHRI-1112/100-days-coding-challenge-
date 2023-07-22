#include <stdio.h>

void printTriangle(int n) {
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }

    return 0;
}
int main()
{
    int N;
    printf("Enter the input:");
    scanf("%d",&N);
    printTriangle(N);
