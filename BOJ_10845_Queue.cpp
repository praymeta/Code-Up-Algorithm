#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    int N, param;
    string instruction;
    queue<int> q;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> instruction;
        if(instruction == "push") {
            cin >> param;
            q.push(param);
        } else if(instruction == "pop") {
            if(q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if(instruction == "size") {
            cout << q.size() << '\n';
        } else if(instruction == "empty") {
            cout << q.empty() << '\n';
        } else if(instruction == "front") {
            if(q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        } else if(instruction == "back") {
            if(q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }
}
