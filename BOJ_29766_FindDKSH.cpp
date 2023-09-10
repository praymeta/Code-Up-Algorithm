#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string given, DKSH = "DKSH";
    cin >> given;
    int pos = 0, cnt = 0;
    while(given.find(DKSH, pos) != string::npos) {
        cnt++;
        pos = given.find(DKSH, pos) + DKSH.length();
    }
    cout << cnt;
}
