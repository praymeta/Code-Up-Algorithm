#include <stdio.h>

void quickSort(int a[], int, int);

int main(void) {
	int length_of_array;
	scanf("%d", &length_of_array);
    int array[length_of_array];
	for(int i = 0; i < length_of_array; i++) {
		scanf("%d ", &array[i]);
	}
	quickSort(array, 0, length_of_array - 1);
    printf("%d %d", array[0], array[length_of_array-1]);

    return 0;
}

void quickSort(int data[], int start, int end){
    if(start >= end) {
        return;
    }
    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    while(j >= i) {
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
