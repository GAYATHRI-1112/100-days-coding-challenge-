#include <stdio.h>

int second_maximum(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
    else
        return c;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int second_max = second_maximum(a, b, c);
        printf("%d\n", second_max);
    }

    return 0;
}
