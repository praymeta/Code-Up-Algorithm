#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, k, d, a, temp, donation = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        int kda[m][3];
        for(int j = 0; j < m; j++) {
            cin >> kda[j][0] >> kda[j][1] >> kda[j][2];
        }
        cin >> k >> d >> a;
        for(int j = 0; j < m; j++) {
            temp = k * kda[j][0] - d * kda[j][1] + a * kda[j][2];
            if(temp < 0) {
                continue;
            }
            donation += temp;
        }
        cout << donation << '\n';
        donation = 0;
    }
}
