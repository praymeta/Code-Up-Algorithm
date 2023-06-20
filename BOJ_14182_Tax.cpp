#include <iostream>
using namespace std;

int main(void) {
    int oshloobs, result;
    while(cin >> oshloobs && oshloobs != 0) {
        if(oshloobs <= 1000000) {
            cout << oshloobs << '\n';
        } else if(oshloobs <= 5000000) {
            result = oshloobs * 0.9;
            cout << result << '\n';
        } else {
            result = oshloobs * 0.8;
            cout << result << '\n';
        }
    }
}
