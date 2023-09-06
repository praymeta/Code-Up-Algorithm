#include <iostream>
using namespace std;

int main(void) {
    string result;
    int n, m, resultNum = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> result;
        for(int j = 0; j < m; j++) {
            if(result[j] == '+') {
                resultNum++;
                break;
            }
        }
    }
    cout << resultNum;
}
