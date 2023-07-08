#include<stdio.h>
int main()
{
    int N,T;
    printf("Enter the no of test cases=");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter the value of N");
        scanf("%d",&N);
        if(N%4==0)
        printf("%d",(N/4));
        else

    printf("%d",(N/4)+1);

    }
