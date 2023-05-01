#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector <int> N(5), temp(3);
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> N[j];
        }
        sort(N.begin(), N.end());
        copy(N.begin() + 1, N.end() - 1, temp.begin());
        if(temp[2] - temp[0] >= 4) cout << "KIN\n";
        else cout << temp[0] + temp[1] + temp[2] << '\n';
    }
}
