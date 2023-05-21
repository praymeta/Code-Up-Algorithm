#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = 0;
    for(int i = 0; i < array.size(); i++) {
        if(max < array[i]) max = array[i];
    }
    answer.push_back(max);
    for(int i = 0; i < array.size(); i++) {
        if(array[i] == max) answer.push_back(i);
    }
    return answer;
}
