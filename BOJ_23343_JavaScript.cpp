#include <iostream>
#include <string>
using namespace std;

int isOnlyNumber(string x) {
    for(int i = 0; i < x.length(); i++) {
        if(!('0' <= x[i] && x[i] <= '9')) return 1;
    }
    return 0;
}

int main(void) {
    string x, y;
    cin >> x >> y;
    if(isOnlyNumber(x)) cout << "NaN";
    else if(isOnlyNumber(y)) cout << "NaN";
    else cout << stoi(x) - stoi(y);
}
