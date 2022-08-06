#include <iostream>
using namespace std;

int main(void) {
    int day, car[5], cnt = 0;
    cin >> day;
    cin >> car[0] >> car[1] >> car[2] >> car[3] >> car[4];
    for(int i = 0; i < 5; i++) {
        if (day == car[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
