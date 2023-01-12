#include <stdio.h>

void quickSort(int array[], int start, int end);

int main(void) {
    int length;
    scanf("%d\n", &length);
    int array[length];

    for(int i = 0; i < length; i++) {
        scanf("%d\n", &array[i]);
    }
    quickSort(array, 0, length - 1);
    for(int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}

void quickSort(int array[], int start, int end) {
    if(start >= end) {
        return;
    }
    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    while(i <= j) {
        while(array[i] <= array[key]) {
            i++;
        }
        while(array[j] >= array[key] && j > start) {
            j--;
        }
        if(i > j) {
            temp = array[j];
            array[j] = array[key];
            array[key] = temp;
        } else {
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }
    quickSort(array, start, j - 1);
    quickSort(array, j + 1, end);
}
