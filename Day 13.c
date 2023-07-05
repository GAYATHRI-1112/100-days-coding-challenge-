#include<stdio.h>
int main ()
{int T,N;
    printf("Enter the no of test cases=");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter the no of bits N=");
        scanf("%d",&N);
        if(N%4==0)
        printf("Good ");
        else
        printf("Not Good");
    }
}
