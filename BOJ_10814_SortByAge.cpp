#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main(void) {
    int N, age;
    string name;
    vector<pair<int, string>> user;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> age >> name;
        user.push_back(pair(age, name));
    }
    stable_sort(user.begin(), user.end(), compare);
    for(int i = 0; i < user.size(); i++)
        cout << user[i].first << ' ' << user[i].second << '\n';
}
