#include <stdio.h>

int main(void) {
    int first_number, temp_number, count;
    count = 0;
    scanf("%d", &first_number);
    temp_number = first_number;

    while(1) {
        temp_number = (temp_number % 10) * 10 + (temp_number / 10 + temp_number % 10) % 10;
        count++;

        if(first_number == temp_number) {
            break;
        }
    }
    printf("%d", count);
    return 0;
}
