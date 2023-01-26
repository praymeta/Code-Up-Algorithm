#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    while(cin >> n) {
        if(n > 0) cnt++;
    }
    cout << cnt;
}
