#include <iostream>
using namespace std;

int main(void) {
    int n, m, k, team = 0;
    cin >> n >> m >> k;
    while(n >= 2 && m >= 1) {
        n -= 2;
        m -= 1;
        if(n >= 0 && m >= 0) {
            team++;
        }
    }
    k = k - (n + m);
    if(k > 0) {
        while(k > 0) {
            team--;
            k -= 3; 
        }
    }
    cout << team << endl;
    return 0;
}
