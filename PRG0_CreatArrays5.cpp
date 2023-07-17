#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string tempString;
    int tempInt;
    for(int i = 0; i < intStrs.size(); i++) {
        tempString = intStrs[i].substr(s, l);
        tempInt = stoi(tempString);
        if(tempInt > k) answer.push_back(tempInt);
    }
    return answer;
}
