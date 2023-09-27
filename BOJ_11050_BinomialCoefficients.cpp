#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void) {
    int N, K;
    cin >> N >> K;
    cout << factorial(N) / (factorial(N - K) * factorial(K));
}
