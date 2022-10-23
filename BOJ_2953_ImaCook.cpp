#include <iostream>
using namespace std;

int main(void) {
    int cook[5] = {0, }, score[4], maxScore = 0, num;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> score[j];
            cook[i] += score[j];
        }
        maxScore = max(maxScore, cook[i]);
        if(maxScore == cook[i]) {
            num = i + 1;
        }
    }
    cout << num << ' ' << maxScore;
}
