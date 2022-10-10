#include <iostream>
using namespace std;

int main(void) {
    string str, friends;
    int n, cnt = 0;
    cin >> str >> n;
    for(int i = 0; i < n; i++) {
        cin >> friends;
        if(str == friends) {
            cnt++;
        }
    }
    cout << cnt;
}
