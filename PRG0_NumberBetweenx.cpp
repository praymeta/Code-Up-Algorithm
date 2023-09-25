#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int temp_index = 0;
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] == 'x') {
            answer.push_back(i - temp_index);
            temp_index = i + 1;
        }
        if(i == myString.length() - 1)
            answer.push_back(myString.length() - temp_index);
    }
    return answer;
}
