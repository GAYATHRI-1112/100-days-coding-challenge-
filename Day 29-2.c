#include <stdlib.h>

#include <stdio.h>

void printTriangle(int n) {
    int val=1;
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%d ", val);
            val++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a number between 1 and 20: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 20) {
        printTriangle(n);
    } else {
        printf("Invalid input. Please enter a number between 1 and 20.\n");
    }

    return 0;
}
