#include <iostream>
#include <list>
#include <map>
using namespace std;

int main(void) {
    map<int, list<int>> rank;
    rank[1] = {12, 1600};
    rank[2] = {11, 894};
    rank[3] = {11, 1327};
    rank[4] = {10, 1311};
    rank[5] = {9, 1004};
    rank[6] = {9, 1178};
    rank[7] = {9, 1357};
    rank[8] = {8, 837};
    rank[9] = {7, 1055};
    rank[10] = {6, 556};
    rank[11] = {6, 773};

    int N;
    cin >> N;
    N -= 1;
    
    auto it = rank.begin();
    advance(it, N);

    if (it != rank.end()) {
        for (int val: it->second) {
            cout << val << ' ';
        }
    }
}
