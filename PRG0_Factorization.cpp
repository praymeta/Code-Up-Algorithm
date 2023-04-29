#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            n /= i;
            answer.push_back(i);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}
