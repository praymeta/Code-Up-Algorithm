#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<long> cache(n + 1);
    cache[0] = 0;
    for(int p = 1; p <= n; p++) {
        int number;
        cin >> number;
        cache[p] = cache[p - 1] + number;
    }
    for(int p = 0; p < m; p++) {
        int i, j;
        cin >> i >> j;
        cout << cache[j] - cache[i - 1] << '\n';
    }
}
