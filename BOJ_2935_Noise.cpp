#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(void) {
    string a, b, c;
    cin >> a >> c >> b;
    if(c == "+") {
        int size = max(a.size(), b.size());
        int temp = a.size() - b.size();
        string plus = "";
        if(temp < 0) {
            for(int i = 0; i < abs(temp); i++) {
                plus += "0";
            }
            a = plus + a;
        } else {
            for(int i = 0; i < abs(temp); i++) {
                plus += "0";
            }
            b = plus + b;
        }
        for(int i = size - 1; i >= 0; i--) {
            if(b[i] - '0') {
                a[i] = ((a[i] - '0') + (b[i] - '0')) + '0';
            }
        }
        cout << a;
    } else {
            int size = a.size() - 1 + b.size() - 1;
            cout << "1";
            while(size--) {
                cout << 0;
        }
    }
}
