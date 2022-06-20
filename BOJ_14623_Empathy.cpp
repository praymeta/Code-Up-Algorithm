#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1; cin >> str2;

    int length1 = str1.size(), length2 = str2.size();
    int result[64] = {0, };
    int digit = 1, length;
    for(int i = length2 - 1; i >= 0; --i) {
        int index = 1 * digit;
        for(int j = length1 - 1; j >= 0; --j) {
            result[index++] += (str1[j] - '0') * (str2[i] - '0');
        }
        ++digit;
        length = index;
    }
    for(int i = 1; i < length; i++) {
        if(result[i] >= 2) {
            result[i + 1] += (result[i] / 2);
            result[i] %= 2;
        }
    }
    for(int i = length; i > 0; i--) {
        if(i == length && result[i] == 0) continue;
        cout << result[i];
    }
    cout << endl;
    return 0;
}
