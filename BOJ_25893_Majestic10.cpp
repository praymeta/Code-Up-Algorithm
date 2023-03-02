#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c << '\n';
        int cnt = 0;
        if(a >= 10) cnt++;
        if(b >= 10) cnt++;
        if(c >= 10) cnt++;
        if(cnt == 3) cout << "triple-double\n\n";
        else if(cnt == 2) cout << "double-double\n\n";
        else if(cnt == 1) cout << "double\n\n";
        else cout << "zilch\n\n";
    }
}
