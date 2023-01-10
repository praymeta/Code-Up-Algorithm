#include <iostream>
using namespace std;

int main(void) {
    int n, k;
    cin >> n;
    char picture[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> picture[i][j];
        }
    }
    cin >> k;
    if(k == 1) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << picture[i][j];
            }
            cout << '\n';
        }
    } else if(k == 2) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n / 2; j++) {
                char temp;
                temp = picture[i][j];
                picture[i][j] = picture[i][n - (j + 1)];
                picture[i][n - (j + 1)] = temp;
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << picture[i][j];
            }
            cout << '\n';
        }
    } else {
        for(int i = 0; i < n / 2; i++) {
            for(int j = 0; j < n; j++) {
                char temp;
                temp = picture[i][j];
                picture[i][j] = picture[n - (i + 1)][j];
                picture[n - (i + 1)][j] = temp;
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << picture[i][j];
            }
            cout << '\n';
        }
    }
}
