#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string num, revNum;
    while(cin >> num && num != "0") {
        revNum = num;
        reverse(revNum.begin(), revNum.end());
        if(num == revNum) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}
