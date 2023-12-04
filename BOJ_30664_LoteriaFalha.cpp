#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string input;
    while(cin >> input && input != "0") {
        int remainder = 0;
        for(char digit: input) {
            remainder = (remainder * 10 + (digit - '0')) % 42;
        }
        if(remainder == 0)
            cout << "PREMIADO\n";
        else
            cout << "TENTE NOVAMENTE\n";
    }
}
