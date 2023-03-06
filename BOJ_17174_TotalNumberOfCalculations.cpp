#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int result = n;
    while(true) {
        result += n / m;
        n /= m;
        if(n < m) break;
    }
    cout << result << '\n';
}
