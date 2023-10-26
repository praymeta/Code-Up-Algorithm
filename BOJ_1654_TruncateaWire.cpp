#include <iostream>
using namespace std;

int main(void) {
    int K, N, maxLength = 0;
    cin >> K >> N;
    int wire[K];
    for(int i = 0; i < K; i++) {
        cin >> wire[i];
        if(maxLength < wire[i])
            maxLength = wire[i];
    }
    long long l, mid, r, cnt, answer;
    l = 1;
    r = maxLength;
    answer = 0;
    while(l <= r) {
        mid = (l + r) / 2;
        cnt = 0;
        for(int i = 0; i < K; i++)
            cnt += wire[i] / mid;
        if(cnt >= N) {
            l = mid + 1;
            if(answer < mid)
                answer = mid;
        } else
            r = mid - 1;
    }
    cout << answer;
}
