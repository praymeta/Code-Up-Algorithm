#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int arr_len = arr.size();
    if(arr_len%2) {
        for (int i = 0; i < arr_len; i += 2)
            arr[i] += n;
    } else {
        for (int i = 1; i < arr_len; i += 2)
            arr[i] += n;
    }
    return answer = arr;
}
