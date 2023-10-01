#include <iostream>
using namespace std;

int main(void) {
    int N, cnt = 0;
    cin >> N;
    int A[N], B[N];
    for(int i = 0; i < N; i++)
        cin >> A[i];
    for(int i = 0; i < N; i++) {
        cin >> B[i];
        if(B[i] >= A[i])
            cnt++;
    }
    cout << cnt;
}
