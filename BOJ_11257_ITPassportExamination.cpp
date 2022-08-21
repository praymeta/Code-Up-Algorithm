#include <iostream>
using namespace std;

int main(void) {
    int n, num;
    double a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num >> a >> b >> c;
        if(a + b + c >= 55 && a >=35 * 0.3 && b >= 25 * 0.3 && c >= 40 * 0.3) {
            cout << num << ' ' << (int)(a + b + c) << ' ' << "PASS" << endl;
        } else {
            cout << num << ' ' << (int)(a + b + c) << ' ' << "FAIL" << endl;
        }
    }
    return 0;
}
