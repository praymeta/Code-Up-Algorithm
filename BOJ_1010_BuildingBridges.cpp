#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int T, N, M, ans, tmp;
    cin >> T;
    for(int i = 0; i < T; i++) {
        ans = tmp = 1;
        cin >> N >> M;
        for(int j = M; j > M - N; j--) {
            ans = ans * j;
            ans = ans / tmp++;
        }
        cout << ans << '\n';
    }
}
