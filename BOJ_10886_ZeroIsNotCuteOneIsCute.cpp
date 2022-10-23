#include <iostream>
using namespace std;

int main(void) {
    int n, cute, yes = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> cute;
        if(cute == 1) yes++;
    }
    if(yes > n - yes) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
}
