#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = n; n >= 1; n--) {
        result *= n;
    }
    return result;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string number;
    int sum = 0;
    while(cin >> number && number != "0") {
        for(int i = 0; i < number.size(); i++) {
            int temp = number[i] - '0';
            sum += temp * factorial(number.size() - i);
        }
        cout << sum << '\n';
        sum = 0;
    }
}
