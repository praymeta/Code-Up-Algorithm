#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, c;
    cin >> n;
    cout << "Gnomes:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if(a < b && b < c) {
            cout << "Ordered" << endl;
        } else if(a > b && b > c) {
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }
    return 0;
}
