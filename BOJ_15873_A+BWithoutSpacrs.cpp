#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char ab[5];
    cin.getline(ab, 5);

    if (strlen(ab) == 4) {
        cout << "20" << endl;
    } else if (strlen(ab) == 3) {
        if (ab[2] == '0') {
            cout << '1' << ab[0] << endl;
        } else {
            cout << '1' << ab[2] << endl;
        }
    } else {
        cout << (ab[0] - '0') + (ab[1] - '0') << endl;
    }
    return 0;
}
