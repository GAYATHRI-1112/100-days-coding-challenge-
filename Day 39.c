#include <stdio.h>
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int findMinIndex(int arr[], int i, int n) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[min]) {
            min = j;
        }
    }
    return min;
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = findMinIndex(arr, i, n);
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[1000], n, T;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        selectionSort(arr, n);
        printArray(arr, n);
    }

    return 0;
}
