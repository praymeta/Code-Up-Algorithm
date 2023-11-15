#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string num;
    vector<char> sorted;
    cin >> num;
    for(int i = 0; i < num.length(); i++) {
        sorted.push_back(num[i]);
    }
    sort(sorted.begin(), sorted.end());
    for(int i = sorted.size() - 1; i >= 0; i--) {
        cout << sorted[i];
    }
}
