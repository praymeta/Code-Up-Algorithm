#include <stdio.h>

void quickSort(float array[], int start, int end);
float average(float array[], float result, int subject);

int main(void) {
    int subject;
    float max, result = 0;
    scanf("%d\n", &subject);
    float grades[subject];
    for(int i = 0; i < subject; i++) {
        scanf("%f ", &grades[i]);
    }
    quickSort(grades, 0, subject - 1);
    max = grades[subject - 1];
    for(int i = 0; i < subject; i++) {
        grades[i] = grades[i] / max * 100;
    }
    result = average(grades, result, subject);
    printf("%f", result);
    return 0;
}

void quickSort(float array[], int start, int end) {
    if(start >= end) {
        return;
    }
    int key = start;
    int i = start + 1;
    int j = end;
    int temp;
    while(i <= j) {
        while(array[key] >= array[i]) {
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

float average(float array[], float result, int subject) {
    for(int i = 0; i < subject; i++) {
        result = result + array[i];
    }
    return result / subject;
}
