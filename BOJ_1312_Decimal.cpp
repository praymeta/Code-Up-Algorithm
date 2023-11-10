#include <iostream>
using namespace std;

int main(void) {
    long long A, B, N, ans = 0;
    cin >> A >> B >> N;
    if(A % B == 0) {
        cout << 0;
        return 0;
    }
    if(A > B)
        A = A % B;
    for(int i = 0; i < N; i++) {
        A *= 10;
        ans = (int)(A / B);
        A = A % B;
    }
    cout << ans;
}
