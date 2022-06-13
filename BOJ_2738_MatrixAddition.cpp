#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int mat1[n][m];
    int mat2[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            mat1[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << mat1[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
