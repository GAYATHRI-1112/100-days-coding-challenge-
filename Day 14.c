#include<stdio.h>
int main()
{
    int A,B,X,T;
    printf("Enter the no of test cases=");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter the value of X, A and B ");
        scanf("%d%d%d",&X,&A,&B);
        if(A+B*2>=X)
        printf("Qualify");
        else

    printf("Not qualify");

    }
}
