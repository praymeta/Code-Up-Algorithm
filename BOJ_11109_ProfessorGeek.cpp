#include <iostream>
using namespace std;

int main(void) {
    int t, d, n, s, p, serial, parallel;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> d >> n >> s >> p;
        parallel = d + n * p;
        serial = n * s;
        if(parallel > serial) cout << "do not parallelize\n";
        else if(parallel < serial) cout << "parallelize\n";
        else cout << "does not matter\n";
    }
}
