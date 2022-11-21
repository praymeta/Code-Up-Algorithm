#include <iostream>
using namespace std;

int main(void) {
    int firstGrade[] = {1, 2, 3, 4, 5, 6};
    int firstMoney[] = {5000000, 3000000, 2000000, 500000, 300000, 100000};
    int secondGrade[] = {1, 2, 4, 8, 16};
    int secondMoney[] = {5120000, 2560000, 1280000, 640000, 320000};
    int t, a, b, prizeMoney = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        for(int j = 0; j < 6; j++) {
            if(a == 0) {
                break;
            }
            a -= firstGrade[j];
            if(a <= 0) {
                prizeMoney += firstMoney[j];
                break;
            }
        }
        for(int j = 0; j < 5; j++) {
            if(b == 0) {
                break;
            }
            b -= secondGrade[j];
            if(b <= 0) {
                prizeMoney += secondMoney[j];
                break;
            }
        }
        cout << prizeMoney << '\n';
        prizeMoney = 0;
    }
}
