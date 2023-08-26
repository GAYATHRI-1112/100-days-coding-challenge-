#include <stdio.h>
#include <stdlib.h>

int printSquare(int n)
{
    int i,j,s;
    s=2*n-1;
    for(i=1;i<=s;i++)
    {
        for(j=1;j<=s;j++)
        {
            int m=(i<j)?i:j;
            m=(m<s-i+1)?m:s-i+1;
             m=(m<s-j+1)?m:s-j+1;
             printf("%d",n-m+1);
             if(j<s)
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
