#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int real_n;
    cin >> real_n;
    int div[real_n];
    for(int i = 0; i < real_n; i++) {
        cin >> div[i];
    }
    sort(div, div + real_n);
    cout << div[0] * div[real_n - 1];
}
