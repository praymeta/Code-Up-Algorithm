#include <stdio.h>

int count(char *, char);

int main(void) {
    int num1, num2, num3;
    int mul, cnt;
    char array[9];
    char compare[11] = "0123456789";
    scanf("%d\n%d\n%d\n", &num1, &num2, &num3);
    mul = num1 * num2 * num3;
    sprintf(array, "%d", mul);
    for(int i = 0; i < 10; i++) {
        cnt = count(array, compare[i]);
        printf("%d\n", cnt);
    }
    
}

int count(char *c, char x) {
    int count = 0;
    for(int i = 0; c[i] != NULL; i++) {
        if(c[i] == x) {
            count++;
        }
    }
    return count;
}
