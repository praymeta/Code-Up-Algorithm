#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N, decom = 0;
    cin >> N;
    for(int i = 1; i < N; i++) {
        int tempInt = 0;
        string tempStr = to_string(i);
        for(int j = 0; j < tempStr.length(); j++)
            tempInt += tempStr[j] - '0';
        tempInt += i;
        if(tempInt == N) {
            cout << i;
            return 0;
        }
    }
    cout << decom;
}
