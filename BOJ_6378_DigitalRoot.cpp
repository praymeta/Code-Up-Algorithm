#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string number;
    while(cin >> number && number != "0") {
        while(number.size() > 1) {
            int temp = 0;
            for(int i = 0; i < number.size(); i++) {
                temp += number[i] - '0';
            }
            number = to_string(temp);
        }
        cout << number << '\n';
    }
}
