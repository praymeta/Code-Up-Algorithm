#include <iostream>
using namespace std;

int main(void) {
    int n, best = 0;
    cin >> n;
    int score[n];
    for(int i = 0; i < n; i++) {
        cin >> score[i];
    }
    for(int i = 1; i < n; i++) {
        if(score[best] < score[i]) best = i;
    }
    if(best == 0) cout << 'S';
    else cout << 'N';
}
