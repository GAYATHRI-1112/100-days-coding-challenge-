#include<stdio.h>
int main()
{
    int N,X,T;
    printf("Enter the no of test cases=");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter the value of N,X");
        scanf("%d%d",&N,&X);
        if(X%N==0)
        printf("Yes");
        else
    printf("No");

    }
}
