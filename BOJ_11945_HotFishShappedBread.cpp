#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int fish[n][m];
    for(int i = 0; i < n; i++) {
        string fishRow;
        cin >>fishRow;
        for(int j = 0; j < m; j++) {
            fish[i][j] = fishRow[j] - '0';
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = m - 1; j >= 0; j--) {
            cout << fish[i][j];
        }
        cout << endl;
    }
    return 0;
}
