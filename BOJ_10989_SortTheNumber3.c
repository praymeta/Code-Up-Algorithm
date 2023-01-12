#include <stdio.h>

#define MAX_SIZE 10001
int cnt[MAX_SIZE];

int main(void) {
    int length, index;
    scanf("%d", &length);
    for(int i = 0; i < length; i++) {
        scanf("%d", &index);
        cnt[index]++;
    }
    for(int i = 0; i < MAX_SIZE; i++) {
        if(cnt[i] != 0) {
            for(int j = 0; j < cnt[i]; j++) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
