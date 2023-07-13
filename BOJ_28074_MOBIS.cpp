#include <iostream>
using namespace std;

bool findMobis(string str, char mobis) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == mobis) return true;
    }
    return false;
}

int main(void) {
    string str;
    cin >> str;
    bool mobis[5];
    mobis[0] = findMobis(str, 'M');
    mobis[1] = findMobis(str, 'O');
    mobis[2] = findMobis(str, 'B');
    mobis[3] = findMobis(str, 'I');
    mobis[4] = findMobis(str, 'S');
    for(int i = 0; i < 5; i++) {
        if(mobis[i] != true) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
