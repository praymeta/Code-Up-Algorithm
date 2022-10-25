#include <iostream>
using namespace std;

int main(void) {
    int n, d, a = 0;
    cin >> n >> d;
    int score[n];
    for(int i = 0; i < n; i++) {
        cin >> score[i];
        a += score[i];
    }
    d /= a;
    for(int i = 0; i < n; i++) {
        cout << d * score[i] << endl;
    }
}
