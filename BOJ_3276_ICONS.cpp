#include <iostream>
using namespace std;

int main(void) {
    int N, temp, minSum = 101, minRow, minCol;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(N % i)
            temp = N / i + 1;
        else
            temp = N / i;
        if(i + temp < minSum) {
            minSum = i + temp;
            minRow = i;
            minCol = temp;
        }
    }
    cout << minRow << ' ' << minCol;
}
