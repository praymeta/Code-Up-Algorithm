#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, prime[1000001] = {0, };
    cin >> M >> N;
    for(int i = 2; i <= N; i++)
        prime[i] = i;
    for(int i = 2; i * i <= N; i++) {
        if(prime[i] == 0)
            continue;
        for(int j = i * i; j <= N; j += i) {
            prime[j] = 0;
        }
    }
    for(int i = M; i <= N; i++) {
        if(prime[i] != 0)
            cout << i << '\n';
    }
}
