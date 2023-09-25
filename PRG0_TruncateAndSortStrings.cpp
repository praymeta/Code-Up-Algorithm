#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    int temp_index = 0;
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] == 'x') {
            if(i - temp_index != 0)
                answer.push_back(myString.substr(temp_index, i - temp_index));
            temp_index = i + 1;
        }
        if(i == myString.length() - 1 && myString.length() - temp_index != 0)
            answer.push_back(myString.substr(temp_index, myString.length() - temp_index));
    }
    sort(answer.begin(), answer.end());
    return answer;
}
