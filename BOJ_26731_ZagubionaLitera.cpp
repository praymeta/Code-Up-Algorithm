#include <iostream>
using namespace std;

int main(void) {
    int plate[26] = {0, };
    string alphabet;
    cin >> alphabet;
    for(int i = 0; i < alphabet.size(); i++) {
        plate[alphabet[i] - 65] = 1;
    }
    for(int i = 0; i < 26; i++) {
        if(plate[i] == 0) {
            char c = i + 65;
            cout << c;
        }
    }
}
