#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char str1[1000];
    char str2[1000];
    cin.getline(str1, 1000);
    cin.getline(str2, 1000);

    if (strlen(str1) >= strlen(str2)) {
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
