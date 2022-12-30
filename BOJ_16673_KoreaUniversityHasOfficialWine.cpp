#include <iostream>
using namespace std;

int main(void) {
    int c, k, p, wine = 0;
    cin >> c >> k >> p;
    for(int i = 1; i <= c; i++) {
        wine += k * i + p * i * i;
    }
    cout << wine;
}
