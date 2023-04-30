#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector <int> number(5);
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> number[i];
        sum += number[i];
    }
    sort(number.begin(), number.end());
    cout << sum / 5 << '\n' << number[2];
}
