#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;
    if(strstr((char*)str1.c_str(), (char*)str2.c_str()) == NULL) cout << 0;
    else cout << 1;
}
