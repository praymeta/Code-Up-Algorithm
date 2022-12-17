#include <iostream>
using namespace std;

int main(void) {
    int n, data;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> data;
        for(int i = 0; i < data; i++) {
            cout << "=";
        }
        cout << '\n';
    }
}
