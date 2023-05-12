#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, temp, even = 0, odd = 0;
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> temp;
            if(temp % 2) odd += temp;
            else even += temp;
        }
        if(even > odd) cout << "EVEN\n";
        else if(even == odd) cout << "TIE\n";
        else cout << "ODD\n";
    }
}
