#include <iostream>
using namespace std;

int main(void) {
    string a, b;
    while(cin >> a >> b) {
        if(a == "0" && b == "0") break;
        int cnt = 0, index = 0;
        int intA[10], intB[10];
        for(int i = a.length() - 1; i >= 0; i--) {
            intA[index] = a[i] - '0';
            index++;
        }
        index = 0;
        for(int i = b.length() - 1; i >= 0; i--) {
            intB[index] = b[i] - '0';
            index++;
        }
        for(int i = 0; i < 10; i++) {
            if(i >= a.length()) intA[i] = 0;
            if(i >= b.length()) intB[i] = 0;
        }
        for(int i = 0; i < 10; i++) {
            if(intA[i] + intB[i] >= 10) {
                cnt++;
                intA[i + 1] += (intA[i] + intB[i]) / 10;
            }
        }
        cout << cnt << '\n';
    }
}
