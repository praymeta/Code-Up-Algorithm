#include <iostream>
using namespace std;

int main(void) {
    float T, A, B, triangleA, triangleB;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> A >> B;
        triangleA = A * A;
        triangleB = B * B;
        cout << int(triangleA / triangleB) << '\n';
    }
}
