#include <iostream>
using namespace std;

int main(void) {
    int N, T, time = 0;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> T;
        time += T;
    }
    time += (8 * (N - 1));
    cout << time / 24 << ' ' << time % 24;
}
