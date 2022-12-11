#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    string str;
    char temp[3] = {0, };
    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str.size() == 3) {
            cnt++;
        } else if(str.size() == 4) {
            if(str[2] != '9') {
                cnt++;
            } else {
                if(str[3] == '0') {
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
}
