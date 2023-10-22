#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, weight, height;
    vector<pair<int, int>> people;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> weight >> height;
        people.push_back(make_pair(weight, height));
    }
    for(int i = 0; i < N; i++) {
        int rank = 1;
        for(int j = 0; j < N; j++) {
            if(people[i].first < people[j].first && people[i].second < people[j].second)
                rank++;
        }
        cout << rank << ' ';
    }
}
