#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while(i < arr.size()) {
        if(!(stk.size())) {
            stk.push_back(arr[i]);
            i++;
        } else {
            int temp = stk.back();
            if(temp < arr[i]) {
                stk.push_back(arr[i]);
                i++;
            } else {
                stk.pop_back();
            }
        }
    }
    return stk;
}
