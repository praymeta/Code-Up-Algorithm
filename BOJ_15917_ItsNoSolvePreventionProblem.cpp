#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int q, a;
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> a;
        if((a & (-a)) == a) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
