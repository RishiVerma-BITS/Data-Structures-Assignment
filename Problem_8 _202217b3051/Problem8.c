#include <stdio.h>

int smallest(int arr[], int i, int n, int *pos) {
    int small = arr[i];
    *pos = i;
    for (int j = i + 1; j < n; j++) {
        if (small > arr[j]) {
            small = arr[j];
            *pos = j;
        }
    }
    return *pos;
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int pos;
        smallest(arr, i, n, &pos);
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}