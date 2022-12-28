#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, scoreA = 0, scoreB = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a > b) {
            scoreA++;
        } else if(b > a) {
            scoreB++;
        }
    }
    cout << scoreA << ' ' << scoreB;
}
