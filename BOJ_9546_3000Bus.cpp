#include <iostream>
#include <cstring>
using namespace std;

int passenger[31];

int passCal(int k) {
    if(k == 1) return 1;
    
    if(passenger[k] != -1) return passenger[k];
    return passenger[k] = passCal(k - 1) * 2 + 1;
}

int main(void) {
    int t, k;
    cin >> t;
    memset(passenger, -1, sizeof(passenger));
    for(int i = 0; i < t; i++) {
        cin >> k;
        cout << passCal(k) << '\n';
    }
}
