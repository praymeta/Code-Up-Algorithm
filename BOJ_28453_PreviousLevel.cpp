#include <iostream>
using namespace std;

int main(void) {
    int N, M;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> M;
        if(300 <= M)
            cout << 1;
        else if(275 <= M && M < 300)
            cout << 2;
        else if(250 <= M && M < 275)
            cout << 3;
        else
            cout << 4;
        cout << ' ';
    }
}
