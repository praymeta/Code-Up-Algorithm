#include <iostream>
using namespace std;

int main(void) {
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        int number_of_candy[n], kids = 0;
        for(int i = 0; i < n; i++) {
            cin >> number_of_candy[i];
            kids += number_of_candy[i] / k;
        }
        cout << kids << '\n';
    }
}
