#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    char str[n];
    cin.ignore();
    cin.getline(str, n + 1);
    for(int i = 0; i < n; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
