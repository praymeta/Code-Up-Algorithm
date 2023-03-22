#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, location;
    string str;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> location >> str;
        str.erase(str.begin() + (location - 1));
        cout << str << '\n';
    }
}