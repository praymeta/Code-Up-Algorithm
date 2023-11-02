#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n == 0) {
        cout << 0;
        return 0;
    }
    double trunc, sumVal = 0;
    vector<double> input(n + 1, 0);
    trunc = round(n * 0.15);
    for(int i = 1; i <= n; i++) {
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    for(int i = 1; i <= n; i++) {
        if(i > trunc && i <= n - trunc)
            sumVal += input[i];
    }
    cout << floor((sumVal / (n - 2 * trunc)) + 0.5);
}
