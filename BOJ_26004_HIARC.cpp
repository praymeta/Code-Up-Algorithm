#include <iostream>
using namespace std;

int main(void) {
    int n, min_hiarc = 100000, hiarc[5] = {0, };
    string str;
    cin >> n >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'H') hiarc[0]++;
        else if(str[i] == 'I') hiarc[1]++;
        else if(str[i] == 'A') hiarc[2]++;
        else if(str[i] == 'R') hiarc[3]++;
        else if(str[i] == 'C') hiarc[4]++;
    }
    for(int i = 0; i < 5; i++) {
        if(hiarc[i] < min_hiarc) min_hiarc = hiarc[i];
    }
    cout << min_hiarc;
}
