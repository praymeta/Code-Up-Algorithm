#include <iostream>
using namespace std;

int main(void) {
    int n, p, minCost;
    cin >> n >> p;
    double s5, s10, s15, s20;
    s5 = p - 500;
    s10 = p * 0.9;
    s15 = p - 2000;
    s20 = p * 0.75;

    if(n >= 20) {
        minCost = min(s5, min(s10, min(s15, s20)));
        if(minCost <= 0) cout << 0;
        else cout << minCost;
    } else if(n >= 15) {
        minCost = min(s5, min(s10, s15));
        if(minCost <= 0) cout << 0;
        else cout << minCost;
    } else if(n >= 10) {
        minCost = min(s5, s10);
        if(minCost <= 0) cout << 0;
        else cout << minCost;
    } else if(n >= 5) {
        minCost = s5;
        if(minCost <= 0) cout << 0;
        else cout << minCost;
    } else {
        cout << p;
    }
}
