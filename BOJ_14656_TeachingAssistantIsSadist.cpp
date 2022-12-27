#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    int student[n];
    for(int i = 0; i < n; i++) {
        cin >> student[i];
        if(i + 1 != student[i]) {
            cnt++;
        }
    }
    cout << cnt;
}
