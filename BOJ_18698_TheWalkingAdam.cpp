#include <iostream>
using namespace std;

int main(void) {
    int t, cnt = 0;
    string str;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> str;
        for(int j = 0; j < str.length(); j++) {
            if(str[j] != 'D') {
                cnt++;
            } else {
                break;
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
}
