#include <iostream>
using namespace std;

int main(void) {
    int n, team[10], MZ[2] = {0,};
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> team[j];
            if(team[j] == 17) MZ[0] = 1;
            else if(team[j] == 18) MZ[1] = 1;
        }
        for(int j = 0; j < 10; j++) {
            cout << team[j] << ' ';
        }
        cout << '\n';
        if(MZ[0] == 1 && MZ[1] == 1) {
            cout << "both" << '\n';
        } else if(MZ[0] == 0 && MZ[1] == 0) {
            cout << "none" << '\n';
        } else if(MZ[0] == 1) {
            cout << "zack" << '\n';
        } else {
            cout << "mack" << '\n';
        }
        cout << '\n';
        MZ[0] = MZ[1] = 0;
    }
}
