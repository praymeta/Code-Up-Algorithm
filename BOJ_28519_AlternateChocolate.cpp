#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    if(N == M)
        cout << N * 2;
    else
        cout << 2 * min(N, M) + 1;
}
