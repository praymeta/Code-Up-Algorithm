#include <stdio.h>

#define MAX_SIZE 1000000
int sorted[MAX_SIZE];

void merge(int a[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    while(i <= mid && j <= right) {
        if(a[i] <= a[j]) {
            sorted[k++] = a[i++];
        } else {
            sorted[k++] = a[j++];
        }
    }
    if(i > mid) {
        for(l = j; l <= right; l++) {
            sorted[k++] = a[l];
        }
    } else {
        for(l = i; l <= mid; l++) {
            sorted[k++] = a[l];
        }
    }
    for(l = left; l <= right; l++) {
        a[l] = sorted[l];
    }
}

void mergeSort(int a[], int left, int right) {
    int mid;

    if(left < right) {
        mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main(void) {
    int length;
    scanf("%d", &length);
    int array[length];

    for(int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }

    mergeSort(array, 0, length - 1);

    for(int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
