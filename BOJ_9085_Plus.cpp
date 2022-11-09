#include <iostream>
using namespace std;

int main(void) {
    int t, n, temp, sum = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> temp;
            sum += temp;
        }
        cout << sum << endl;
        sum = 0;
    }
}
