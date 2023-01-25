#include <iostream>
using namespace std;

int digitSum(string n) {
    int sumOfDigit = 0;
    for(int i = 0; i < n.size(); i++) {
        sumOfDigit += n[i] - '0';
    }
    return sumOfDigit;
}

int main(void) {
    string number;
    int n, sumOfDigit, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        number = to_string(i);
        sumOfDigit = digitSum(number);
        if(i % sumOfDigit == 0) cnt++;
    }
    cout << cnt;
}
