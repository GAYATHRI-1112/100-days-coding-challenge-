#include <stdio.h>

int main() {
    float T,BS;
    printf("Enter the no of test cases:");
    scanf("%f",&T);
    while (T--)
    {
        printf("Enter BS  value: ");
        scanf("%f",&BS);
        if(BS<1500)
        printf("Total salary=%f",BS+BS/10+0.9*BS);
        else
printf("Total salary=%f",BS+500+0.98*BS);
    }

    return 0;
