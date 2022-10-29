#include <iostream>
using namespace std;

int main(void) {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        cout << (long)n * n << "\n";
    }
}
