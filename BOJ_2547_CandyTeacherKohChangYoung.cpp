#include <iostream>
using namespace std;

int main(void) {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        unsigned long long candy[n], temp = 0;
        for(int j = 0; j < n; j++) {
            scanf("%llu", &candy[j]);
            temp += candy[j];
            temp -= (temp / n) * n;
        }
        if(temp == 0) printf("YES\n");
        else printf("NO\n");
    }
}
