#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int answerLength = 1;
    while(answerLength < arr.size())
        answerLength *= 2;
    while(answer.size() < answerLength)
        answer.push_back(0);
    return answer;
}
