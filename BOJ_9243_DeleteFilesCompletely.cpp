#include <iostream>
#include <string>
using namespace std;

string OneComplement(string a) {
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '1') a[i] = '0';
        else a[i] = '1';
    }
    return a;
}

int BinaryCompare(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void) {
    int n, temp;
    string a, b;
    cin >> n >> a >> b;
    if(n % 2) {
        b = OneComplement(b);
        temp = BinaryCompare(a, b);
        if(temp == 1) cout << "Deletion succeeded";
        else cout << "Deletion failed";
    } else {
        temp = BinaryCompare(a, b);
        if(temp == 1) cout << "Deletion succeeded";
        else cout << "Deletion failed";
    }
}
