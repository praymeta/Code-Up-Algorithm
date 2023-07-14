#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, X, temp, minPrice = 2100000000;
    cin >> N >> X;
    vector<int> A;
    for(int i = 0; i < N; i++) {
        cin >> temp;
        A.push_back(temp * X);
    }
    for(int i = 0; i < N - 1; i++) {
        if(minPrice > A[i] + A[i + 1])
            minPrice = A[i] + A[i + 1];
    }
    cout << minPrice;
}
