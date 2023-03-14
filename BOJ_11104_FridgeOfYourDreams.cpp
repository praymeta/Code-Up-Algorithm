#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    string binary;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        cin >> binary;
        for(int j = 23; j >= 0; j--) {
            if(binary[j] == '1') {
                sum += pow(2, 23 - j);
            }
        }
        cout << sum << '\n';
    }
}
