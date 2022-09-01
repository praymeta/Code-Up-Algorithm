#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    cin.ignore();
    char str[51];
    for(int i = 0; i < n; i++) {
        cin.getline(str, 51);
        cout << i + 1 << ". " << str << endl;
    }
}
