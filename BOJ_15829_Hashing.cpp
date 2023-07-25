#include <iostream>
using namespace std;

#define M 1234567891

int main(void) {
    int L, temp;
    unsigned long long hash = 0;
    string str;
    cin >> L >> str;
    for(int i = L - 1; i >= 0; i--) {
        temp = str[i] - 'a' + 1;
        hash = (((hash << 5) - hash) + temp) % M;
    }
    cout << hash % M;
}
