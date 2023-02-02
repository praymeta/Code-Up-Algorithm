#include <iostream>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int alphabet[26] = {0, };
        int sum = 0;
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++) {
            if(alphabet[s[j] - 65] == 0) alphabet[s[j] - 65] = 1;
        }
        for(int j = 0; j < 26; j++) {
            if(alphabet[j] == 0) sum += j + 65;
        }
        cout << sum << '\n';
    }
}
