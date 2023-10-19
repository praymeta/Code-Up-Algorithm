#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp = "";
    for(int i = 0; i < myStr.length(); i++) {
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c') {
            if(temp.length() != 0) {
                answer.push_back(temp);
                temp = "";
            }
        } else {
            temp += myStr[i];
        }
    }
    if(temp.length() != 0)
        answer.push_back(temp);
    if(answer.size() == 0)
        answer.push_back("EMPTY");
    return answer;
}
