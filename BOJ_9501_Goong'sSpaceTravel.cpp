#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, ans = 0;
        cin >> n >> d;
        while (n--) {
            int vi, fi, ci;
            cin >> vi >> fi >> ci;
            if (vi * fi / ci >= d) ans++;
        }
        cout << ans << '\n';
    }
}
