#include <iostream>
using namespace std;

int main(void) {
    int m, n, a, b, c;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
    }
    if(m >= 8) {
        cout << "satisfactory";
    } else {
        cout << "unsatisfactory";
    }
    return 0;
}
