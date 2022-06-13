#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char str[256];
    int cnt = 0;
    while(1) {
        cin.getline(str, 256);
        if(str[0] == '#') {
            break;
        }
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}
