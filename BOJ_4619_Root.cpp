#include <iostream>
using namespace std;

int main(void) {
    int B, N, A, An;
    while((cin >> B >> N) && (B != 0 && N != 0)) {
        A = 1;
        An = 1;
        for(int i = 1; ; i++) {
            int temp = 1;
            for(int j = 0; j < N; j++)
                temp *= i;
            if(abs(temp - B) < abs(B - An)) {
                A = i;
                An = temp;
            }
            if(temp > B)
                break;
        }
        cout << A << '\n';
    }
}
