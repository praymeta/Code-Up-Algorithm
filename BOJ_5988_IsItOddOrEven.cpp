#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int temp = str[str.size() - 1] - 48;
        if(temp % 2 == 0) {
            cout << "even" << '\n';
        } else {
            cout << "odd" << '\n';
        }
    }
}
