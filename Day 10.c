#include <stdio.h>

int main() {
    int T,X,Y;
    printf("Enter the no of test cases=");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter the no of 10 and 5 rupee coins:");
        scanf("%d%d",&X,&Y);
        printf("Total amount=%d\n",(10*X)+(5*Y));
    }
