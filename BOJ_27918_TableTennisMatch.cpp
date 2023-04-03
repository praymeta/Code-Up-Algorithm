#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n, d = 0, p = 0;
    char winner;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> winner;
        if(winner == 'D') d++;
        else p++;
        if(abs(d - p) >= 2) break;
    }
    cout << d << ':' << p;
}
