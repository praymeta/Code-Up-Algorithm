#include <iostream>
using namespace std;

int main(void) {
    int n, a, b;
    cin >> n >> a >> b;
    if(b < a) {
        if(n <= b) cout << "Subway";
    } else if(a < b) cout << "Bus";
    else cout << "Anything";
}
