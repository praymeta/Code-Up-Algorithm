#include <iostream>
using namespace std;

int main(void) {
    int finalPrice, temp, n;
    cin >> n >> temp;
    finalPrice = temp;
    for(int i = 1; i < n; i++) {
        cin >> temp;
        finalPrice += temp;
    }
    cout << finalPrice;
}
