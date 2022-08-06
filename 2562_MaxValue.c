#include <stdio.h>

void quickSort(int [], int, int);

int main(void) {
    int array[9];
    int copy[9];
    int maxValue;
    int cnt;
    for(int i = 0; i < 9; i++) {
        scanf("%d\n", &array[i]);
    }
    for(int i = 0; i < 9; i++) {
        copy[i] = array[i];
    }
    quickSort(copy, 0, 8);
    maxValue = copy[8];

    for(int i = 0; i < 9; i++) {
        if(maxValue == array[i]) {
            cnt = i + 1;
        }
    }
    printf("%d\n%d", maxValue, cnt);
    return 0;
}

void quickSort(int data[], int start, int end) {
    if(start >= end) {
        return;
    }
    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    while(i <= j) {
        while(data[i] <= data[key]) {
            i++;
        }
        while(data[j] >= data[key] && j > start) {
            j--;
        }
        if(i > j) {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}
