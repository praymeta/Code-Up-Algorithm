#include <iostream>
using namespace std;

int main(void) {
    int n, temp, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
    }
    cout << sum;
}
