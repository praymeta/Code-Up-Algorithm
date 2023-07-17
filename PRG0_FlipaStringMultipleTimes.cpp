#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(int i = 0; i < queries.size(); i++) {
        reverse(answer.begin() + queries[i][0], answer.begin() + queries[i][1] + 1);
    }
    return answer;
}
