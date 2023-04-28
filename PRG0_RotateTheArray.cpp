#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer(numbers.size());
    if(direction == "left") {
        for(int i = 0; i < numbers.size(); i++) {
            if(i == numbers.size() - 1) answer[i] = numbers[0];
            else answer[i] = numbers[i + 1];
        }
    } else {
        for(int i = 0; i < numbers.size(); i++) {
            if(i == 0) answer[i] = numbers[numbers.size() - 1];
            else answer[i] = numbers[i - 1];
        }
    }
    return answer;
}
