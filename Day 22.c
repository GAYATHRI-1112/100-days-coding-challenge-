#include <stdio.h>

int find_degree_of_polynomial(int N, int coefficients[]) {
    // Find the degree by counting the number of non-zero coefficients.
    int degree = N - 1;
    while (degree >= 0) {
        if (coefficients[degree] != 0) {
            break;
        }
        degree--;
    }
    return degree;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);

        int coefficients[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }

        // Find and output the degree of the polynomial
        int degree = find_degree_of_polynomial(N, coefficients);
        printf("%d\n", degree);
    }

    return 0;
