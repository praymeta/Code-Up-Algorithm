#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double t, n, m, temp, check, cnt = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        for(int a = 1; a < n; a++) {
            for(int b = a + 1; b < n; b++) {
                temp = (pow(a, 2) + pow(b, 2) + m) / (a * b);
                check = ceil(temp);
                if(temp == check) cnt++;
            }
        }
        cout << cnt << '\n';
        cnt = 0;
    }
}
