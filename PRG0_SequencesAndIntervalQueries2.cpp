#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer, temp;
    for(int i = 0; i < queries.size(); i++) {
        for(int j = queries[i][0]; j <= queries[i][1]; j++) {
            if(queries[i][2] < arr[j]) temp.push_back(arr[j]);
        }
        if(temp.size() == 0) answer.push_back(-1);
        else answer.push_back(*min_element(temp.begin(), temp.end()));
        temp.clear();
    }
    return answer;
}
