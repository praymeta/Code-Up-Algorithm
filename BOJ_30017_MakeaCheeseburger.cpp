#include <iostream>
using namespace std;

int main(void) {
    int A, B;
    cin >> A >> B;
    if(A > B)
        cout << B + B + 1;
    else
        cout << A + A - 1;
}
