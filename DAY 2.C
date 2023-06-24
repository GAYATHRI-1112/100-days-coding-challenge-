#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 

        int water_required = 2 * N;  
        printf("%d\n", water_required); 
    }

    return 0;
}
