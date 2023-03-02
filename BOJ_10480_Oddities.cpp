#include <iostream>
using namespace std;

int main(void) {
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x % 2 == 0) cout << x << " is even\n";
        else cout << x << " is odd\n";
    }
}
