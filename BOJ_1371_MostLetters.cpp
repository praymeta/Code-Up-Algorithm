#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int maxAlphabetFreq = 0, alphabet[26] = {0, };
    char ch;
    while(cin >> ch) {
        if(ch == EOF) break;
        if(ch != ' ') alphabet[ch - 97]++;
    }
    for(int i = 0; i < 26; i++) {
        if(maxAlphabetFreq < alphabet[i]) maxAlphabetFreq = alphabet[i];
    }
    for(int i = 0; i < 26; i++) {
        if(maxAlphabetFreq == alphabet[i]) cout << (char)(i + 97);
    }
}
