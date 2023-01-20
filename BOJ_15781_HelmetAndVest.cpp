#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int helmet[n], vest[m];
    for(int i = 0; i < n; i++) {
        cin >> helmet[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> vest[i];
    }
    sort(helmet, helmet + n);
    sort(vest, vest + m);
    cout << helmet[n - 1] + vest[m - 1];
}
