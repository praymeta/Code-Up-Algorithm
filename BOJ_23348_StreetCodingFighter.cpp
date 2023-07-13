#include <iostream>
using namespace std;

int main(void) {
    int A, B, C, N, a, b, c, maxScore = 0;
    cin >> A >> B >> C >> N;
    for(int i = 0; i < N; i++) {
        int temp = 0;
        for(int j = 0; j < 3; j++) {
            cin >> a >> b >> c;
            temp += A * a + B * b + C * c;
        }
        if(maxScore < temp) maxScore = temp;
    }
    cout << maxScore;
}
