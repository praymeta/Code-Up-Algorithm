#include <iostream>
using namespace std;

int main(void) {
    int n, computer = 0;
    cin >> n;
    int plug[n];
    for(int i = 0; i < n; i++) {
        cin >> plug[i];
        if(i == n - 1) {
            computer += plug[i];
        } else {
            computer += (plug[i] - 1);
        }
    }
    cout << computer;
}
