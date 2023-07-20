#include <iostream>
using namespace std;

int main(void) {
    long long week, sec = 1, N;
    cin >> N;
    week = 60 * 60 * 24 * 7;
    for(int i = 1; i <= N; i++) {
        sec *= i;
    }
    cout << sec / week;
}
