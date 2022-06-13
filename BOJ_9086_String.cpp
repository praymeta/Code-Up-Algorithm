#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    int t;
    char str[1000];
    cin >> t;
    cin.ignore(10000, '\n');
    for(int i = 0; i < t; i++) {
        cin.getline(str, 1000);
        cout << str[0] << str[strlen(str) - 1] << endl;
    }
    return 0;
}
