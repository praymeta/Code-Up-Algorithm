#include <iostream>
#include <cstring>
using namespace std;

int n;
int cache[12];

int plusCounter(int n) {
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else if(n == 3) return 4;

    if(cache[n] != -1) return cache[n];
    return cache[n] = plusCounter(n - 1) + plusCounter(n - 2) + plusCounter(n - 3);
}

int main(void) {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        memset(cache, -1, sizeof(cache));
        cout << plusCounter(n) << '\n';
    }
}
