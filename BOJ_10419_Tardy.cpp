#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double n, lecture, tardy = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> lecture;
        while((tardy + 1) + pow((tardy + 1), 2) <= lecture) {
            tardy++;
        }
        cout << tardy << '\n';
        tardy = 0;
    }
}
