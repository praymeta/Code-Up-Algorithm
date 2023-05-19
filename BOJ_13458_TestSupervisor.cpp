#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, b, c, supervisor = 0;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> b >> c;
    for(int i = 0; i < n; i++) {
        a[i] -= b;
        supervisor++;
        if(a[i] <= 0) continue;
        if(a[i] % c) supervisor += a[i] / c + 1;
        else supervisor += a[i] / c;
    }
    cout << supervisor;
}
