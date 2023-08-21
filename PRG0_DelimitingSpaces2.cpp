#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string buffer = "";
    for(int i = 0; i < my_string.length(); i++) {
        if(my_string[i] == ' ') {
            if(buffer.length() != 0) {
                answer.push_back(buffer);
                buffer = "";
            }
        } else {
            buffer += my_string[i];
        }
    }
    if(buffer.length() != 0)
        answer.push_back(buffer);
    return answer;
}
