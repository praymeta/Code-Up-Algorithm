#include <iostream>
using namespace std;

int main(void) {
    int n, reward;
    unsigned long long sum_of_reward = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> reward;
        sum_of_reward += reward;
    }
    if(sum_of_reward % 3 == 0) cout << "yes";
    else cout << "no";
}
