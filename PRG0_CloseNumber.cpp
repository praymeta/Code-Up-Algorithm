#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0, min_abs = 100, min_value;
    sort(array.begin(), array.end());
    for(int i = 0; i < array.size(); i++) {
        if(min_abs > abs(array[i] - n)) {
            min_abs = abs(array[i] - n);
            min_value = array[i];
        }
    }
    answer = min_value;
    return answer;
}
