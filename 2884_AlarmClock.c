#include <stdio.h>

int main(void) {
    int hour, minute;
    scanf("%d %d", &hour, &minute);

    if(45 <= minute) {
        printf("%d %d", hour, minute - 45);
    } else {
        if(hour == 0) {
            printf("23 %d", minute + 15);
        } else {
            printf("%d %d", hour - 1, minute + 15);
        }
    }
}
