#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n, a, b;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str >> a >> b;
        cout << str.erase(a, b - a) << '\n';
    }
}
