#include <stdio.h>

void printTriangle(int n) {
    for (int i = n; i >= 1; i--) {
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
}

int main() {
    int N;
    scanf("%d", &N);
    printTriangle(N);
    return 0;
