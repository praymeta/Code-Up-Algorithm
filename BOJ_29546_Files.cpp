#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, l, r;
    vector<string> answer;
    cin >> n;
    string files[n];
    for(int i = 0; i < n; i++) {
        cin >> files[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> l >> r;
        for(int j = l - 1; j < r; j++) {
            answer.push_back(files[j]);
        }
    }
    for(int i = 0; i < answer.size(); i++)
        cout << answer[i] << '\n';
}
