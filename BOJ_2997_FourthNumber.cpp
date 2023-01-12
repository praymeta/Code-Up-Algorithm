#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int number[3];
    cin >> number[0] >> number[1] >> number[2];
    sort(number, number + 3);
    if(number[1] - number[0] == number[2] - number[1]) {
        cout << number[2] + number[2] - number[1];
    } else if((number[1] - number[0]) * 2 == number[2] - number[1]) {
        cout << number[1] + number[1] - number[0];
    } else {
        cout << number[1] - (number[2] - number[1]);
    }
}
