#include <iostream>
#include <algorithm>
using namespace std;

typedef struct Word {
    int len;
    string str;
} Word;

bool wordCompare(Word word1, Word word2) {
    if(word1.len == word2.len) {
        return word1.str < word2.str;
    } else {
        return word1.len < word2.len;
    }
}

int main(void) {
    int t;
    cin >> t;
    Word word[t + 1];
    word[t].len = 51;
    for(int i = 0; i < t; i++) {
        cin >> word[i].str;
        word[i].len = word[i].str.length();
    }
    sort(word, word + t, wordCompare);
    for(int i = 0; i < t; i++) {
        if(word[i].str == word[i + 1].str) {
            continue;
        }
        cout << word[i].str << endl;
    }
    return 0;
}
