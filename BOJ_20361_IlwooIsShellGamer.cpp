#include <iostream>
using namespace std;

int main(void) {
    int n, x, k, a, b, ball;
    cin >> n >> x >> k;
    ball = x;
    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        if(a == ball) ball = b;
        else if(b == ball) ball = a;
    }
    cout << ball;
}
