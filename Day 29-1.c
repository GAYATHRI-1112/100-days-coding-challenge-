#include <stdio.h>

void printTriangle(int n) {
    // Print the upper half of the triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf("  "); // Print spaces for the gap between the two parts
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
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
