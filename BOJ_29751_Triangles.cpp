#include <iostream>
using namespace std;

int main(void) {
    int W, H;
    cin >> W >> H;
    cout.precision(1);
    cout << fixed << W * H * 0.5;
}
