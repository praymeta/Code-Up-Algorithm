#include <stdio.h>

int main(void) {
    int num1, num2, r1, r10, r100;
    scanf("%d\n", &num1);
    scanf("%d", &num2);

    r1 = num2 % 10;
    r10 = ((num2 % 100) - r1) / 10;
    r100 = (num2 - (r10 * 10) - r1) / 100;
    printf("%d\n", num1 * r1);
    printf("%d\n", num1 * r10);
    printf("%d\n", num1 * r100);
    printf("%d\n", num1 * num2);
}
