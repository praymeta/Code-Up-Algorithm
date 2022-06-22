#include <iostream>
using namespace std;

int main(void) {
    string callNumber;
    cin >> callNumber;
    if(callNumber.substr(0, 3) == "555") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
