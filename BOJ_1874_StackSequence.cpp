#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
    int n, cnt, maxPointer;
    stack<int> st;
    vector<string> answer;
    cin >> n;
    int element;
    cnt = maxPointer = 1;
    while(n--) {
        cin >> element;
        while(cnt <= element) {
            st.push(cnt);
            answer.push_back("+");
            cnt++;
            maxPointer++;
        }
        if(!st.empty() && element == st.top()) {
            st.pop();
            answer.push_back("-");
        } else {
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << '\n';
    }
}
