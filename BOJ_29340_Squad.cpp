#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string squad1, squad2, finalSquad = "";
    int tmp1, tmp2;
    cin >> squad1 >> squad2;
    for(int i = 0; i < squad1.length(); i++) {
        tmp1 = squad1[i] - '0';
        tmp2 = squad2[i] - '0';
        finalSquad += max(tmp1, tmp2) + '0';
    }
    cout << finalSquad;
}
