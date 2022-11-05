#include <iostream>
using namespace std;

int main(void) {
    int n, flow = 0, score = 0;
    cin >> n;
    int problem[n];
    for(int i = 0; i < n; i++) {
        cin >> problem[i];
        if(problem[i] == 1) {
            flow++;
            score += flow;
        } else {
            flow = 0;
        }
    }
    cout << score;
}
