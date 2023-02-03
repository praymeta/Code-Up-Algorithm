#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int sum = 0;
        cin >> n;
        for(int j = 1; j <= n; j = j + 2) {
            sum += j;
        }
        cout << sum << '\n';
    }
}
