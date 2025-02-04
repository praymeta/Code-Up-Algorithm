#include <iostream>
using namespace std;

int sum(int A, int B) {
    return A + B;
}

int main(void) {
    int A, B, C;
    cin >> A >> B;
    C = sum(A, B);

    cout << C;
}
