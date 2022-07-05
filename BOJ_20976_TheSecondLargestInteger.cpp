#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int number[3];
    for(int i = 0; i < 3; i++) {
        cin >> number[i];
    }
    sort(number, number + 3);
    cout << number[1];
    return 0;
}
