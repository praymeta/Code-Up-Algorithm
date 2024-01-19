#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0, l1, l2;
    l1 = arr1.size();
    l2 = arr2.size();
    if (l1 > l2) answer = 1;
    else if (l2 > l1) answer = -1;
    else {
        int s1 = accumulate(arr1.begin(), arr1.end(), 0);
        int s2 = accumulate(arr2.begin(), arr2.end(), 0);
        if (s1 > s2) answer = 1;
        else if (s2 > s1) answer = -1;
        else answer = 0;
    }
    return answer;
}
