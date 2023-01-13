#include <iostream>
using namespace std;

int main(void) {
    int t, n, first[50], second[50];
    cin >> t;
    for(int i = 0; i < t; i++) {
        int cnt = 0;
        cin >> n;
        cout << "Pairs for " << n << ": ";
        for(int j = 1; j <= n / 2 + 1; j++) {
            for(int k = 1; k < n; k++) {
                if(j + k == n && j < k && j != 0) {
                    first[cnt] = j;
                    second[cnt] = k;
                    cnt++;
                }
            }
        }
        for(int j = 0; j < cnt; j++) {
            cout << first[j] << ' ' << second[j];
            if(j != cnt - 1) cout << ", ";
        }
        cout << '\n';
    }
}
