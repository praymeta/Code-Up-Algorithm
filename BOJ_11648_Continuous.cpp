#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string number;
    cin >> number;
    int cnt = 0, numLength = number.length();
    while(numLength > 1) {
        int temp = 1;
        for(int i = 0; i < numLength; i++) {
            temp *= number[i] - '0';
        }
        number = to_string(temp);
        numLength = number.length();
        cnt++;
    }
    cout << cnt;
}
