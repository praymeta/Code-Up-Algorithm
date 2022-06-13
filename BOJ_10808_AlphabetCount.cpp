#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char str[100];
    int alphabet[26] = {0};
    cin.getline(str, 100);
    for(int i = 0; i < strlen(str); i++) {
        alphabet[str[i] - 97]++;
    }
    for(int i = 0; i < 26; i++) {
        cout << alphabet[i] << ' ';
    }
    return 0;
}
