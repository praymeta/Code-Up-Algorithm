#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    double a[k], multitap = 0;
    for(int i = 0; i < k; i++) {
        cin >> a[i];
        multitap += ceil(a[i] / 2);
    }
    if(multitap >= n) cout << "YES";
    else cout << "NO";
}
