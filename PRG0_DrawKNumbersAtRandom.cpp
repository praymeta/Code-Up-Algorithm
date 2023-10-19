#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    int chkArr[100001] = {0, };
    int chk = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(chk >= k)
            break;
        if(chkArr[arr[i]] == 0) {
            answer.push_back(arr[i]);
            chkArr[arr[i]] = 1;
            ++chk;
        }
    }
    while(chk < k) {
        answer.push_back(-1);
        ++chk;
    }
    return answer;
}
