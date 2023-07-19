#include <iostream>
using namespace std;

int main(void) {
    int P, C, score = 0;
    cin >> P >> C;
    if(P > C) score += 500;
    score += P * 50;
    score -= C * 10;
    cout << score;
}
