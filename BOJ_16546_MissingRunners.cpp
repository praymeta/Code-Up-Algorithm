#include <iostream>
using namespace std;

int main(void) {
    int N, tmp;
    cin >> N;
    int runner[33000] = {0, };
    for(int i = 0; i < N - 1; i++) {
        cin >> tmp;
        runner[tmp]++;
    }
    for(int i = 1; i <= N; i++) {
        if(runner[i] == 0) {
            cout << i;
            break;
        }
    }
}
