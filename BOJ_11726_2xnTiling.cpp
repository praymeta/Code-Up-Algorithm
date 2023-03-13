#include <iostream>
#include <cstring>
using namespace std;

int cache[1001];

int tilingCounter(int n) {
    if(n == 1) return 1;
    else if(n == 2) return 2;

    if(cache[n] != -1) return cache[n];
    return cache[n] = (tilingCounter(n - 1) + tilingCounter(n - 2)) % 10007;
}

int main(void) {
    int n;
    cin >> n;
    memset(cache, -1, sizeof(cache));
    cout << tilingCounter(n) % 10007;
}
