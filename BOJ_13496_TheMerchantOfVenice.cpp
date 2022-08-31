#include <iostream>
using namespace std;

int main(void) {
    int k, n, s, d, di, vi, cnt = 0;
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> n >> s >> d;
        for(int j = 0; j < n; j++) {
            cin >> di >> vi;
            if(s * d >= di) {
                cnt += vi;
            }
        }
        cout << "Data Set " << i + 1 << ':' << endl;
        cout << cnt << endl;
        cout << endl;
        cnt = 0;
    }
}
