#include <iostream>
using namespace std;

int main(void) {
    long n, p, t, die_check = 0, born_check = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p >> t;
        for(int j = 0; j < t; j++) {
            die_check++;
            born_check++;
            if(die_check >= 7) {
                p--;
                die_check = 0;
            }
            if(born_check >= 4) {
                p++;
                born_check = 0;
            }
        }
        cout << p << '\n';
        die_check = 0;
        born_check = 0;
    }
}
