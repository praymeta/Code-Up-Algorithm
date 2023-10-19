#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, temp;
    map<int, int> card;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> temp;
        ++card[temp];
    }
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> temp;
        cout << card[temp] << ' ';
    }
}
