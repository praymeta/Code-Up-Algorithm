#include <iostream>
using namespace std;

int main(void) {
    double n, a1, p1, r1, p2, slice, whole;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a1 >> p1 >> r1 >> p2;
        slice = a1 / p1;
        whole = r1 * r1 * 3.141592 / p2;
        if(slice > whole) cout << "Slice of pizza" << '\n';
        else cout << "Whole pizza" << '\n';
    }
}
