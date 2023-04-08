#include <iostream>
using namespace std;

int main(void) {
    int score[9], maxScore = 1, sum = 0, temp = 0;
    for(int i = 0; i < 9; i++) {
        cin >> score[i];
        sum += score[i];
        if(temp > 1) {
            maxScore++;
            temp = 0;
        }
        temp++;
        if(score[i] > maxScore * 100) {
            cout << "hacker";
            return 0;
        }
    }
    if(sum < 100) cout << "none";
    else cout << "draw";
}
