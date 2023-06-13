#include <iostream>
using namespace std;

int main(void) {
    int lengthOfName, score = 0;
    string name;
    cin >> lengthOfName >> name;
    for(int i = 0; i < name.length(); i++) {
        score += name[i] - '@';
    }
    cout << score;
}
