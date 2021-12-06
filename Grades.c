#include <stdio.h>

int main(void) {
    int grades;
    scanf("%d", &grades);

    if(90 <= grades) {
        printf("A");
    } else if(80 <= grades && grades <= 89) {
        printf("B");
    } else if(70 <= grades && grades <= 79) {
        printf("C");
    } else if(60 <= grades && grades <= 69) {
        printf("D");
    } else {
        printf("F");
    }
}
