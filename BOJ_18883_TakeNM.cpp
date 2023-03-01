#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = (m * i) + 1; j <= (m * i) + m; j++) {
            cout << j;
            if(j != m * i + m) cout << ' ';
        }
        cout << '\n';
    }
}
