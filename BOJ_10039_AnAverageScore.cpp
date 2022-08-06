#include <iostream>
using namespace std;

int main(void) {
    int sum = 0, grade[5];
    for(int i = 0; i < 5; i++) {
        cin >> grade[i];
    }
    for(int i = 0; i < 5; i++) {
        if (grade[i] < 40) {
            sum += 40;
        } else {
            sum += grade[i];
        }
    }
    cout << sum / 5 << endl;
    return 0;
} 
