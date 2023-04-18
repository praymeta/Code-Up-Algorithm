#include <iostream>
using namespace std;

int main(void) {
    int n, m, u, v, a[100001];
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        cin >> u >> v;
        a[u]++;
        a[v]++;
    }
    for(int i = 1; i <= n; i++) {
        cout << a[i] << '\n';
    }
}
