#include <iostream>
using namespace std;

int main(void) {
    int n, m, cnt = 0;
    cin >> n >> m;
    char bStr[n][m], aStr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%1s", &bStr[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%1s", &aStr[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(bStr[i][j] == aStr[i][j]) {
                cnt++;
            }
        }
    }
    cout << cnt;
}
