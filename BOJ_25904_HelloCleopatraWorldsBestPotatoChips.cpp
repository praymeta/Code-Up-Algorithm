#include <iostream>
using namespace std;

int main(void) {
    int N, X;
    cin >> N >> X;
    int T[N];
    for(int i = 0; i < N; i++)
        cin >> T[i];
    int i = 0;
    while(true) {
        if(T[i] < X) {
            cout << i + 1;
            break;
        }
        if(i == N - 1) {
            i = 0;
            X += 1;
            continue;
        }
        i += 1;
        X += 1;
    }
}
