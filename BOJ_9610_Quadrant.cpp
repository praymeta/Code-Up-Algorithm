#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int xy[n][2], q[5] = {0, };
    for(int i = 0; i < n; i++) {
        cin >> xy[i][0] >> xy[i][1];
        if(xy[i][0] > 0 && xy[i][1] > 0) {
            q[1]++;
        } else if(xy[i][0] < 0 && xy[i][1] > 0) {
            q[2]++;
        } else if(xy[i][0] < 0 && xy[i][1] < 0) {
            q[3]++;
        } else if(xy[i][0] > 0 && xy[i][1] < 0) {
            q[4]++;
        } else {
            q[0]++;
        }
    }
    cout << "Q1: " << q[1] << '\n';
    cout << "Q2: " << q[2] << '\n';
    cout << "Q3: " << q[3] << '\n';
    cout << "Q4: " << q[4] << '\n';
    cout << "AXIS: " << q[0] << '\n';
}
