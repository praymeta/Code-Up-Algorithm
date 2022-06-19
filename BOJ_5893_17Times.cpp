#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str, str17;
    int size;
    cin >> str;
    str17 = str + "0000";
    size = str.size();

    for(int i = size - 1; i >= 0; i--) {
        if (str[i] == '1') {
            str17[i + 4]++;
        }
    }
    for(int i = size -1; i > 0; i--) {
        if (str17[i] >= '2') {
            str17[i - 1] += (str17[i] - '0') / 2;
            str17[i] = ((str17[i] - '0') % 2) + '0';
        }
    }
    if (str17[0] == '2') str17[0] = '0', cout << "1";
    else if (str17[0] == '3') str17[0] = '1', cout << "1";
    else if (str17[0] == '4') str17[0] = '0', cout << "10";
    cout << str17 << endl;
    return 0;
}
