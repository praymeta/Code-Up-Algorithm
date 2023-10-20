#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, K, temp = 0;
    cin >> N >> K;
    vector<int> josephus;
    for(int i = 0; i < N; i++)
        josephus.push_back(i);
    cout << '<';
    while(josephus.size() > 0) {
        temp = (temp - 1 + K) % josephus.size();
        if(josephus.size() == 1)
            cout << josephus[temp] + 1;
        else
            cout << josephus[temp] + 1 << ", ";
        josephus.erase(josephus.begin() + temp);
    }
    cout << '>';
}
