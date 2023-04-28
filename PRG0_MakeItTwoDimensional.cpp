#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer, temp(n);
    for(int i = 0; i < num_list.size() / n; i++) {
        vector<int> temp(n);
        for(int j = 0; j < n; j++) {
            temp[j] = num_list[i * n + j];
        }
        answer.push_back(temp);
    }
    return answer;
}
