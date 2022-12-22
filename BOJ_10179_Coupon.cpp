#include <iostream>
using namespace std;

int main(void) {
    int n;
    double d;
    cin >> n;
    cout.precision(2);
    for(int i = 0; i < n; i++) {
        cin >> d;
        cout << fixed << '$' <<  d * 0.8 << '\n';
    }
}
