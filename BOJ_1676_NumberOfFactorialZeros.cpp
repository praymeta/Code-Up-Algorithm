#include <iostream>
using namespace std;

int main(void) {
    int N, zeros = 0;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(!(i % 125))
            zeros += 3;
        else if(!(i % 25))
            zeros += 2;
        else if(!(i % 5))
            zeros += 1;
    }
    cout << zeros;
}
