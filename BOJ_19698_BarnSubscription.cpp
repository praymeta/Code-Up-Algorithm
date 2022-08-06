#include <iostream>
using namespace std;

int main(void) {
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    if ((w / l) * (h / l) >= n) {
        cout << n << endl;
    } else {
        cout << (w / l) * (h / l) << endl;
    }
    return 0;
}
