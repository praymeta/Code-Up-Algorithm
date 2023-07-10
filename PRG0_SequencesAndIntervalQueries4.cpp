#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for(int i = 0; i < queries.size(); i++) {
        for(int j = queries[i][0]; j <= queries[i][1]; j++) {
            if(!(j % queries[i][2])) answer[j]++;
        }
    }
    return answer;
}
