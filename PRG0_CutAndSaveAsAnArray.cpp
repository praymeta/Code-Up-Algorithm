#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int chk = 0;
    string temp = "";
    for(int i = 0; i < my_str.length(); i++) {
        temp += my_str[i];
        chk++;
        if(chk == n) {
            answer.push_back(temp);
            temp = "";
            chk = 0;
        } else if(i == my_str.length() - 1) answer.push_back(temp);
    }
    return answer;
}
