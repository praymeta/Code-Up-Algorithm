#include <iostream>
using namespace std;

int main(void) {
    int aAttack, aLife, bAttack, bLife;
    cin >> aAttack >> aLife >> bAttack >> bLife;
    while(true) {
        aLife -= bAttack;
        bLife -= aAttack;
        if(aLife < 1 || bLife < 1) break;
    }
    if(aLife < 1 && bLife < 1) {
        cout << "DRAW\n";
    } else {
        cout << "PLAYER ";
        if(aLife > bLife) cout << "A\n";
        else cout << "B\n";
    }
}
