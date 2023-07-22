#include <stdio.h>

void printTriangle(int n) {
    int i,j,k;
   for (int i = 1; i <= n; i++) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
   }
    return 0;
}
int main()
{
    int N;
    printf("Enter the input:");
    scanf("%d",&N);
    printTriangle(N);
