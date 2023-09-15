#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    int A, B, K, X, cnt = 0;
    cin >> A >> B >> K >> X;
    for(int i = A; i <= B; i++) {
        if(abs(K - i) <= X)
            cnt++;
    }
    if(cnt == 0)
        cout << "IMPOSSIBLE";
    else
        cout << cnt;
}
