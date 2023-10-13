#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int N, param, temp;
    cin >> N;
    string instruction;
    stack<int> st;
    for(int i = 0; i < N; i++) {
        cin >> instruction;
        if(instruction == "push") {
            cin >> param;
            st.push(param);
        } else if(instruction == "pop") {
            if(st.empty()) {
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else if(instruction == "size") {
            cout << st.size() << '\n';
        } else if(instruction == "empty") {
            if(st.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        } else if(instruction == "top") {
            if(st.empty()) {
                cout << -1 << '\n';
            } else
                cout << st.top() << '\n';
        }
    }
}
