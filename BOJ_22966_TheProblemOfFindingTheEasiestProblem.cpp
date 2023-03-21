#include <iostream>
using namespace std;

int main(void) {
    int n, difficulty, easiest = 5;
    string problem, easiestProblem;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> problem >> difficulty;
        if(difficulty < easiest) {
            easiestProblem = problem;
            easiest = difficulty;
        }
    }
    cout << easiestProblem;
}
