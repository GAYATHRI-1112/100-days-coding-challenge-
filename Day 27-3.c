#include <stdio.h>

void printTriangle(int n) {
    int i,j;
   for (int i = 0; i < n; i++) {
        for (int j = n-i ; j > 0;j--) {
            printf("* ");
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
