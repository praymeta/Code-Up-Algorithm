#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> len(31, 0);
    for (int i = 0; i < strArr.size(); i++) {
        int str_len = strArr[i].length();
        ++len[str_len];
    }
    int max_val = *max_element(len.begin(), len.end());
    return answer = max_val;
}
