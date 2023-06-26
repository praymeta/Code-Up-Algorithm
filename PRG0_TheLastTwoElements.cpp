#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int lastIndex = num_list.size() - 1;
    if(num_list[lastIndex - 1] < num_list[lastIndex]) 
        answer.push_back(num_list[lastIndex] - num_list[lastIndex - 1]);
    else answer.push_back(num_list[lastIndex] * 2);
    return answer;
}
