#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, swipe = 0, height = 0;
    cin >> N;
    int H[N];
    for(int i = 0; i < N; i++) {
        cin >> H[i];
        if(H[i] >= height)
            swipe++;
        height = H[i];
    }
    cout << swipe;
}
