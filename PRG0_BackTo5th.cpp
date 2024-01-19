#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(5);
    for (int i = 0; i < 5; i++)
        answer[i] = num_list[i];
    int ans_max_value = *max_element(answer.begin(), answer.end());
    int ans_max_index = max_element(answer.begin(), answer.end()) - answer.begin();
    for (int i = 5; i < num_list.size(); i++) {
        if (num_list[i] < ans_max_value) {
            answer[ans_max_index] = num_list[i];
            ans_max_value = *max_element(answer.begin(), answer.end());
            ans_max_index = max_element(answer.begin(), answer.end()) - answer.begin();
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
