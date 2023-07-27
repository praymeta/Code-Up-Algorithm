#include <iostream>
using namespace std;

int main(void) {
    int N, M, K;
    cin >> N >> M >> K;
    if(((M + K - 3) % N) == 0)
        cout << N;
    else
        if(((M + K - 3) % N) > 0)
            cout << (M + K - 3) % N;
        else
            cout << N + ((M + K - 3) % N);
}
