#include <iostream>
using namespace std;

int main(void) {
    int N, H, cnt = 0;
    cin >> N >> H;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        if(H >= A[i])
            cnt++;
    }
    cout << cnt;
}
