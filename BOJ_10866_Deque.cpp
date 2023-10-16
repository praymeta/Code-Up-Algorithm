#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    int N, param;
    string instruction;
    deque<int> dq;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> instruction;
        if(instruction == "push_front") {
            cin >> param;
            dq.push_front(param);
        } else if(instruction == "push_back") {
            cin >> param;
            dq.push_back(param);
        } else if(instruction == "pop_front") {
            if(dq.empty())
                cout << -1 << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if(instruction == "pop_back") {
            if(dq.empty())
                cout << -1 << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if(instruction == "size") {
            cout << dq.size() << '\n';
        } else if(instruction == "empty") {
            cout << dq.empty() << '\n';
        } else if(instruction == "front") {
            if(dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        } else if(instruction == "back") {
            if(dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
    }
}
