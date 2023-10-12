#include <iostream>
using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    int basket[N + 1];
    for(int i = 1; i <= N; i++) {
        basket[i] = i;
    }
    for(int k = 0; k < M; k++) {
        int i, j, temp;
        cin >> i >> j;
        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }
    for(int i = 1; i <= N; i++)
        cout << basket[i] << ' ';
}
