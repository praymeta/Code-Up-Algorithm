#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(void) {
    char inputString[50];
    cin.getline(inputString, 100);

    for(int i = 0; i < strlen(inputString); i++) {
        if (inputString[i] >= 65 && 90 >= inputString[i]) {
            inputString[i] = tolower(inputString[i]);
        } else if (inputString[i] >= 97 && 122 >= inputString[i]) {
            inputString[i] = toupper(inputString[i]);
        }
    }
    for(int i = 0; i < strlen(inputString); i++) {
        cout << inputString[i];
    }
    cout << endl;
    return 0;
}
