#include <iostream>
using namespace std;

int main(void) {
    long n, s;
    while(cin >> n >> s) {
        cout << s / (n + 1) << endl;
    }
    return 0;
}
