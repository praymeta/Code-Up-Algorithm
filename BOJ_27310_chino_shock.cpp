#include <iostream>
using namespace std;

int main(void) {
    string imoji;
    cin >> imoji;
    int difficulty = imoji.length();
    for(int i = 0; i < imoji.length(); i++) {
        if(imoji[i] == ':') difficulty++;
        if(imoji[i] == '_') difficulty += 5;
    }
    cout << difficulty;
}
