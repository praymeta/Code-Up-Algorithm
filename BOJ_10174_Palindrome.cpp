#include <iostream>
using namespace std;

int IsItAlphabet(char a, char b) {
    if(('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z') || ('A' <= b && b <= 'Z') || ('a' <= b && b <= 'z')) {
        return 1;
    } else return 0;
}

int YesOrNo(string str, int j) {
    int printCheck = 0;
    if(IsItAlphabet(str[j], str[str.length() - j - 1])) {
        int temp;
        temp = abs(str[j] - str[str.length() - j - 1]);
        if(!(temp == 0 || temp == 'a' - 'A')) {
            return 1;
        }
    } else {
        if(str[j] != str[str.length() - j - 1]) {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    string str;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, str);
        int temp = 0;
        for(int j = 0; j < str.length() / 2; j++) {
            temp += YesOrNo(str, j);
        }
        if(temp == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}
