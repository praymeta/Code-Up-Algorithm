#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);
    for(int i = 0; i < num_list.size(); i++) {
        if(num_list[i] % 2) answer[1]++;
        else answer[0]++;
    }
    return answer;
}
