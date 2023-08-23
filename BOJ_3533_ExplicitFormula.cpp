#include <iostream>
using namespace std;

int main(void) {
    bool f[10], answer;
    for(int i = 0; i < 10; i++) {
        cin >> f[i];
    }
    answer = f[0] || f[1];
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(i == 0 && j == 1)
                continue;
            answer ^= f[i] || f[j];
        }
    }
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            for(int k = j + 1; k < 10; k++)
                answer ^= f[i] || f[j] || f[k];
        }
    }
    cout << answer;
}
