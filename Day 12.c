#include<stdio.h>
int main()
{
    int A,B,T;
    printf("Enter the no of test cases=");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter the value of A and B ");
        scanf("%d%d",&A,&B);
        if(A*10>B*5)
        printf("First");
        else
{
    if(A*10<B*5)
    printf("Second");
    else
    printf("Any");
}
    }
