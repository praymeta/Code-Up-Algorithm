#include <iostream>
using namespace std;

int main(void) {
    int N, M, temp, opt = 0;
    cin >> N >> M;
    int card[N];
    for(int i = 0; i < N; i++)
        cin >> card[i];
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            for(int k = j + 1; k < N; k++) {
                temp = card[i] + card[j] + card[k];
                if((temp <= M) && (M - temp) < (M - opt))
                    opt = temp;
            }
        }
    }
    cout << opt;
}
