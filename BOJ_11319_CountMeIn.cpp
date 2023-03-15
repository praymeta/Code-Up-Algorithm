#include <iostream>
using namespace std;

int main(void) {
    string str;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        int consonants = 0, vowels = 0;
        getline(cin, str);
        for(int j = 0; j < str.length(); j++) {
            if(str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' || 
            str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') vowels++;
            else if(str[j] != ' ') consonants++;
        }
        cout << consonants << ' ' << vowels << '\n';
    }
}
