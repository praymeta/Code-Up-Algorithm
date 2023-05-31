#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    int a, b;
    string sa, sb, answer;
    cin >> a >> b;
    sa = to_string(a);
    sb = to_string(b);

    if(sa.length() > sb.length()) {
        string temp = "";
        for(int i = 0; i < sa.length() - sb.length(); i++) {
            temp += "0";
        }
        sb = temp + sb;
    } else if(sb.length() > sa.length()) {
        string temp = "";
        for(int i = 0; i < sb.length() - sa.length(); i++) {
            temp += "0";
        }
        sa = temp + sa;
    }

    for(int i = sa.length() - 1; i >= 0; i--) {
        int temp;
        temp = (sa[i] - '0') + (sb[i] - '0');
        answer = to_string(temp) + answer;
    }
    cout << answer;
}
