#include <iostream>
using namespace std;

int group_to_kilo(int g) {
    if(g == 1) return 1;
    else if(g == 2) return 3;
    else return 5;
}

int main(void) {
    int t, g, c, e;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> g >> c >> e;
        if(e <= c) cout << 0 << '\n';
        else cout << (e - c) * group_to_kilo(g) << '\n';
    }
}
