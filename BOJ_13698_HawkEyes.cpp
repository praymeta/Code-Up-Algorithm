#include <iostream>
using namespace std;

int main(void) {
    string str;
    int cup[4] = {1, 0, 0, 2};
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'A') {
            int temp = cup[0];
            cup[0] = cup[1];
            cup[1] = temp;
        } else if(str[i] == 'B') {
            int temp = cup[0];
            cup[0] = cup[2];
            cup[2] = temp;
        } else if(str[i] == 'C') {
            int temp = cup[0];
            cup[0] = cup[3];
            cup[3] = temp;
        } else if(str[i] == 'D') {
            int temp = cup[1];
            cup[1] = cup[2];
            cup[2] = temp;
        } else if(str[i] == 'E') {
            int temp = cup[1];
            cup[1] = cup[3];
            cup[3] = temp;
        } else {
            int temp = cup[2];
            cup[2] = cup[3];
            cup[3] = temp;
        }
    }
    for(int i = 0; i < 4; i++) {
        if(cup[i] == 1) cout << i + 1 << '\n';
    }
    for(int i = 0; i < 4; i++) {
        if(cup[i] == 2) cout << i + 1;
    }
}
