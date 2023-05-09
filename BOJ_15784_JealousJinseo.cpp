#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, jinseo;
    cin >> n >> a >> b;
    a -= 1;
    b -= 1;
    int classroom[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> classroom[i][j];
        }
    }
    jinseo = classroom[a][b];
    for(int i = 0; i < n; i++) {
        if(classroom[a][i] > jinseo) {
            cout << "ANGRY";
            return 0;
        }
    }
    for(int i = 0; i < n; i++) {
        if(classroom[i][b] > jinseo) {
            cout << "ANGRY";
            return 0;
        }
    }
    cout << "HAPPY";
}
