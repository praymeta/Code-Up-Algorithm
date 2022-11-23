#include <iostream>
using namespace std;

int main(void) {
    int t, y, k;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int scoreY = 0, scoreK = 0;
        for(int j = 0; j < 9; j++) {
            cin >> y >> k;
            scoreY += y;
            scoreK += k;
        }
        if(scoreY > scoreK) {
            cout << "Yonsei" << '\n';
        } else if(scoreK > scoreY) {
            cout << "Korea" << '\n';
        } else {
            cout << "Draw" << '\n';
        }
    }
}
