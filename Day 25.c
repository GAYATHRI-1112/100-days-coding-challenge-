#include <stdio.h>

void printSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printSquare(N);
    return 0;
