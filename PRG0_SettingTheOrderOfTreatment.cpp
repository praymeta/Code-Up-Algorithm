#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size()), cp_emergency = emergency;
    sort(cp_emergency.begin(), cp_emergency.end(), greater<>());
    for(int i = 0; i < emergency.size(); i++) {
        for(int j = 0; j < emergency.size(); j++) {
            if(emergency[i] == cp_emergency[j]) {
                answer[i] = j + 1;
            }
        }
    }
    return answer;
}
