#include <iostream>
using namespace std;

int main(void) {
    int n;
    string str;
    cin >> n >> str;
    cout << str.substr(str.size() - 5);
}
