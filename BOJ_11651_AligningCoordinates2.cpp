#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int N, x, y;
    vector<pair<int, int>> coordinate;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        coordinate.push_back(make_pair(y, x));
    }
    sort(coordinate.begin(), coordinate.end());
    for(int i = 0; i < N; i++) {
        cout << coordinate[i].second << ' ' << coordinate[i].first << '\n';
    }
}
