#include <iostream>
using namespace std;

int main(void) {
    int n, A, answer = 0;
    cin >> n >> A;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        answer += a[i] / A;
    }
    cout << answer;
}
