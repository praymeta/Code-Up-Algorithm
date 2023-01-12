#include <iostream>
using namespace std;

int main(void) {
    int number, sum = 0;
    while(cin >> number) {
        sum += number;
    }
    cout << sum;
}
