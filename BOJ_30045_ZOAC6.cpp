#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N, cnt = 0;
    string S;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> S;
        if(S.find("01") != string::npos || S.find("OI") != string::npos)
            cnt++;
    }
    cout << cnt;
}
