#include <iostream>
using namespace std;

int main(void) {
    int isbn[14] = {0, 9, 7, 8, 0, 9, 2, 1, 4, 1, 8}, sum = 0;
    for(int i = 11; i <= 13; i++) {
        cin >> isbn[i];
    }
    for(int i = 1; i < 14; i++) {
        if(i % 2 != 0) {
            sum += isbn[i];
        } else {
            sum += isbn[i] * 3;
        }
    }
    cout << "The 1-3-sum is " << sum << endl;
}
