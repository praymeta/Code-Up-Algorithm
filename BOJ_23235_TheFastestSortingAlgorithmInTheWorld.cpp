#include <iostream>
using namespace std;

int main(void) {
    int n, m, cnt = 1;
    while(1) {
        cin >> n;
        if(n == 0) {
            break;
        }
        for(int i = 0; i < n; i++) {
            cin >> m;
        }
        cout << "Case " << cnt << ": Sorting... done!" << endl;
        cnt++;
    }
    return 0;
}
