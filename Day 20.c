#include <stdio.h>

int main() {
    float T,N,M;
    printf("Enter the no of test cases:");
    scanf("%f",&T);
    while (T--)
    {
        printf("Enter N and M value: ");
        scanf("%f%f",&N,&M);
        if(9*N/10>M)
        printf("Dining");
        else
{
    if(9*N/10<M)
printf("Online");
else 
printf("Either ");
    }
}
    return 0;
