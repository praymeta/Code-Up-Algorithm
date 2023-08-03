#include <iostream>
using namespace std;

int main(void) {
    int N, temp;
    cin >> N;
    long long ans = 0;
    for(int i = 0; i < N * N; i++) {
        cin >> temp;
        ans += temp;
    }
    cout << ans;
}
