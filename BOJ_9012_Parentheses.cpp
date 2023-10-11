#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    string input;
    for(int i = 0; i < T; i++) {
        cin >> input;
        stack<char> st;
        for(int j = 0; j < input.length(); j++) {
            if(input[j] == '(')
                st.push(input[j]);
            else {
                if(st.size() > 0)
                    st.pop();
                else {
                    st.push('0');
                    break;
                }
            }
        }
        if(st.size() == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
