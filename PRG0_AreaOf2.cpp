#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int init = -1, last = -1;
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 2 && init == -1)
            init = i;
        else if(arr[i] == 2)
            last = i;
    }
    if(init == -1)
        answer.push_back(-1);
    else if(last == -1)
        answer.push_back(arr[init]);
    else {
        for(int i = init; i <= last; i++)
            answer.push_back(arr[i]);
    }
    return answer;
}
