#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, maxN = -1, minN = 4000, sumN = 0, frequency[8001] = {0, };
    cin >> N;
    vector<int> number(N);
    for(int i = 0; i < N; i++) {
        cin >> number[i];
        frequency[number[i] + 4000]++;
        sumN += number[i];
        if(maxN < number[i])
            maxN = number[i];
        if(minN > number[i])
            minN = number[i];
    }
    int maxFre = 0, maxFreIdx, maxFreOrder = 0;
    for(int i = 0; i <= 8000; i++) {
        if(frequency[i] == 0)
            continue; 
        if(frequency[i] == maxFre && maxFreOrder == 1) {
            maxFre = frequency[i];
            maxFreIdx = i - 4000;
            maxFreOrder++;
        }
        if(frequency[i] > maxFre) {
            maxFre = frequency[i];
            maxFreIdx = i - 4000;
            maxFreOrder = 1;
        }
    }
    sort(number.begin(), number.end());
    cout << round((float)sumN / N) + 0 << '\n';
    cout << number[number.size() / 2] << '\n';
    cout << maxFreIdx << '\n';
    cout << number.back() - number.front();
}
