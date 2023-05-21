#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ',') cnt++;
    }
    cout << cnt + 1;
}
