#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    int T, N, M, input;
    cin >> T;
    for(int i = 0; i < T; i++) {
        queue<pair<int, int>> printer;
        priority_queue<int> importance;
        int answer = 0;
        cin >> N >> M;
        for(int j = 0; j < N; j++) {
            cin >> input;
            printer.push(pair(j, input));
            importance.push(input);
        }
        while(!printer.empty()) {
            int idx = printer.front().first;
            int ipt = printer.front().second;
            printer.pop();
            if(importance.top() == ipt) {
                importance.pop();
                ++answer;
                if(idx == M) {
                    cout << answer << '\n';
                    break;
                }
            } else {
                printer.push(pair(idx, ipt));
            }
        }
    }
}
