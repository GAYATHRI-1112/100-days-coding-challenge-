#include <stdio.h>

void printTriangle(int n) {
    int i,j;
   for (int i =n; i>0; i--) {
        for (int j=1 ;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");}

    return 0;
}
int main()
{
    int N;
    printf("Enter the input:");
    scanf("%d",&N);
    printTriangle(N);
