#include <stdio.h>

int mode_bit = 0;

const int KERNEL_PROCESS = 0;
const int USER_PROCESS = 1;

void switch_mode(int new_mode) {
    mode_bit = new_mode;
}

void merge(int A[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int d[h + 1];

    while (i <= mid && j <= h) {

        if (A[i] < A[j]) {
            d[k++] = A[i++];
        } else {
            d[k++] = A[j++];
        }
    }
    while (i <= mid) {
        d[k++] = A[i++];
    }
    while (j <= h) {
        d[k++] = A[j++];
    }

    for (int i = l; i <= h; i++) {
        A[i] = d[i];
    }
}

void RMergeSort(int A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

void binary_search(int arr[], int least, int max) {
    printf("Performing User Process........\n");
    int mid = (least + max) / 2;
    int key;
    printf("Enter the value of key to find: ");
    scanf("%d", &key);

    while (least <= max) {

        mid = (least + max) / 2;

        if (key == arr[mid]) {
            printf("Element found\n");
            break;
        } else {
            if (key > arr[mid]) {
                least = mid + 1;
            } else {
                max = mid - 1;
            }
        }
    }
}

void display(int A[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {1, 2, 3, 6, 7, 9, 5, 4};
    int n = sizeof(A) / sizeof(A[0]);

    if (mode_bit == KERNEL_PROCESS) {
        printf("Performing Kernel Process........\n");
        RMergeSort(A, 0, n - 1);
    }

    mode_bit = USER_PROCESS;

    if (mode_bit == USER_PROCESS) {
        binary_search(A, 0, n - 1);
    }

    display(A, n);
    return 0;
}
