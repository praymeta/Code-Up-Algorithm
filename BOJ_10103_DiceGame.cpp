#include <iostream>
using namespace std;

int main(void) {
    int n, c, s, cs = 100, ss = 100;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c >> s;
        if(c > s) {
            ss -= c;
        } else if(s > c) {
            cs -= s;
        }
    }
    cout << cs << '\n' << ss;
}
