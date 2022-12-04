#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double n, w, h, diagonal, match;
    cin >> n >> w >> h;
    diagonal = sqrt(w * w + h * h);
    for(int i = 0; i < n; i++) {
        cin >> match;
        if(match <= diagonal) {
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
}
