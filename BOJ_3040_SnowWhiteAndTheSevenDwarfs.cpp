#include <iostream>
using namespace std;

void DwarfsCheck(int i, int j, int num[]) {
    for(int k = 0; k < 9; k++) {
        if(k == i || k == j) continue;
        cout << num[k] << '\n';
    }
}

int main(void) {
    int num[9], to_hundred = 0;
    for(int i = 0; i < 9; i++) {
        cin >> num[i];
        to_hundred += num[i];
    }
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < i; j++) {
            if(to_hundred - num[i] - num[j] == 100) {
                DwarfsCheck(i, j, num);
                break;
            }
        }
        for(int j = i + 1; j < 9; j++) {
            if(to_hundred - num[i] - num[j] == 100) {
                DwarfsCheck(i, j, num);
                break;
            }
        }
    }
}
