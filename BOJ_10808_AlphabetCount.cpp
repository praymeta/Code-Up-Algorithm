#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char str[101];
    int alphabet[26] = {0};
    cin.getline(str, 101);
    for(int i = 0; i < strlen(str); i++) {
        alphabet[str[i] - 97]++;
    }
    for(int i = 0; i < 26; i++) {
        cout << alphabet[i] << ' ';
    }
    return 0;
}
