#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char secret[500];
    while(1) {
        cin.getline(secret, 500);
        if (secret[0] == 'E' && secret[1] == 'N' && secret[2] == 'D') {
            break;
        }
        char tmp[strlen(secret) + 1];
        for(int i = 0; i < strlen(secret); i++) {
            tmp[strlen(secret) - i] = secret[i];
        }
        for(int i = 1; i <= strlen(secret); i++) {
            cout << tmp[i];
        }
        cout << endl;
    }
    return 0;
}
