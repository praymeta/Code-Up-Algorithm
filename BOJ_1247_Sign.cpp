#include <iostream>
#include <climits>
using namespace std;

int main(void) {
    long long sum = 0, overflow = 0;
    int n;
    for(int t = 0; t < 3; t++) {
        cin >> n;
        sum = 0;
        overflow = 0;
        for(int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;

            if(sum > 0 && temp > 0 && temp > LLONG_MAX - sum) {
                overflow += 1;
            }
            if(sum < 0 && temp < 0 && temp < LONG_MIN - sum) {
                overflow -= 1;
            }

            sum += temp;
        }
        if(overflow < 0) cout << "-\n";
        else if(overflow > 0) cout << "+\n";
        else if(sum == 0) cout << "0\n";
        else if(sum < 0) cout << "-\n";
        else cout << "+\n";
    }
}
