#include <stdio.h>

int main() {
    int T,N,M;
    printf("Enter the no of test cases:");
    scanf("%d",&T);
    while (T--)
    {
        printf("Enter N and M value: ");
        scanf("%d%d",&N,&M);
        if(M>=N)
        printf("Required shoes=%d",N);
        else
printf("Required shoes=%d",N+N-M);
    }

    return 0;
}
