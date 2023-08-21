#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    vector<int> check;
    for(int i = 0; i < strArr.size(); i++) {
        if(strArr[i].find("ad") != string::npos)
            check.push_back(i);
    }
    for(int i = check.size() - 1; i >= 0; i--) {
        strArr.erase(strArr.begin() + check[i]);
    }
    return answer = strArr;
}
