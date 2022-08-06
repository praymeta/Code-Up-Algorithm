#include <stdio.h>

int main(void) {
    int n, x, cnt;
    scanf("%d %d", &n, &x);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &cnt);
        if(x > cnt) {
            printf("%d ", cnt);
        }
    }
    return 0;
}
