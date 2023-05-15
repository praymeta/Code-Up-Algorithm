#include <iostream>
using namespace std;

int main(void) {
    string a = "", ascending = "12345678", descending = "87654321";
    char temp;
    for(int i = 0; i < 8; i++) {
        cin >> temp;
        a += temp;
    }
    if(a == ascending) cout << "ascending";
    else if(a == descending) cout << "descending";
    else cout << "mixed";
}
