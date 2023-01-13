#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
    double n, abc[3];
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> abc[0] >> abc[1] >> abc[2];
        sort(abc, abc + 3);
        cout << "Scenario #" << i << ":\n";
        if(pow(abc[0], 2) + pow(abc[1], 2) == pow(abc[2], 2)) cout << "yes\n\n";
        else cout << "no\n\n";
    }
}
