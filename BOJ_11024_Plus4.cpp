#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n, sum = 0;
    string number, temp;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, number);
        for(int j = 0; j < number.size(); j++) {
            temp += number[j];
            if(number[j] == ' ' || j == number.size() - 1) {
                sum += stoi(temp);
                temp = "";
            }
        }
        cout << sum << '\n';
        sum = 0;
    }
}
