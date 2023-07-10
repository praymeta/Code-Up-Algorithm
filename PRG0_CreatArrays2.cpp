#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string temp;
    for(int i = l; i <= r; i++) {
        temp = to_string(i);
        int chk = 0;
        for(int j = 0; j < temp.length(); j++) {
            if(!(temp[j] == '0' || temp[j] == '5')) chk = 1;
        }
        if(chk == 0) answer.push_back(stoi(temp));
    }
    if(answer.size() == 0) answer.push_back(-1);
    return answer;
}
