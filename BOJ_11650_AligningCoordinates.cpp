#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int N, x, y;
    cin >> N;
    vector<pair<int, int>> coordinate;
    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        coordinate.push_back(pair(x, y));
    }
    sort(coordinate.begin(), coordinate.end());
    for(int i = 0; i < N; i++) {
        cout << coordinate[i].first << ' ' << coordinate[i].second << '\n';
    }
}
