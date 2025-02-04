#include <iostream>
using namespace std;

int main(void) {
    int S, F;
    cin >> S >> F;

    if (F < S) {
        cout << "flight";
    } else {
        cout << "high speed rail";
    }
}
