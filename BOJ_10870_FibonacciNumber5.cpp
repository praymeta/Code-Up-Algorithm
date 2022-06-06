#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n, result;
    cin >> n;
    result = fibonacci(n);
    cout << result << endl;

    return 0;
}
