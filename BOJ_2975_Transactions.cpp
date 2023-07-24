#include <iostream>
using namespace std;

int main(void) {
    int a, b, temp;
    char let;
    while(cin >> a >> let >> b) {
        if((a == 0) && (b == 0) && (let == 'W'))
            break;
        if(let == 'W') {
            temp = a - b;
            if(temp < -200)
                cout << "Not allowed" << '\n';
            else
                cout << temp << '\n';
        } else {
            temp = a + b;
            cout << temp << '\n';
        }
    }
}
