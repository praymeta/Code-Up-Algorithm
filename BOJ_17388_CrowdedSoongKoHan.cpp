#include <iostream>
using namespace std;

int main(void) {
    int s, k, h, minVal;
    cin >> s >> k >> h;
    if (s + k + h >= 100) {
        cout << "OK" << endl;
    } else {
        minVal = min(s, min(k, h));
        if (minVal == s) {
            cout << "Soongsil" << endl;
        } else if (minVal == k) {
            cout << "Korea" << endl;
        } else {
            cout << "Hanyang" << endl;
        }
    }
    return 0;
}
