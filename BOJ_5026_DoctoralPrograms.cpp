#include <iostream>
#include <string>
#include <vector>
using namespace std;

int StringToInt(vector<char> a) {
    string temp = "";
    for(int i = 0; i < a.size(); i++) {
        temp += a[i];
    }
    return stoi(temp);
}

int main(void) {
    int n, left = 0, right = 0;
    string problem;
    vector<char> number_stack;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, problem);
        if(problem[0] == 'P') {
            cout << "skipped\n";
            continue;
        }
        for(int j = 0; j < problem.length(); j++) {
            if('0' <= problem[j] && problem[j] <= '9') {
                number_stack.push_back(problem[j]);
            } else {
                left = StringToInt(number_stack);
                number_stack.clear();
            }
        }
        right = StringToInt(number_stack);
        number_stack.clear();
        cout << left + right << '\n';
    }
}
