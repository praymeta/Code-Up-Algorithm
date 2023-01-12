#include <stdio.h>

int main(void) {
    int array[10];
    int i, j, result = 0;
    for(i = 0; i < 10; i++) {
        scanf("%d\n", &array[i]);
    }
    for(i = 0; i < 10; i++) {
        array[i] = array[i] % 42;
        for(j = 0; j < i; j++) {
            if(array[i] == array[j]) {
                break;
            }
        }
        if(i == j) {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}
