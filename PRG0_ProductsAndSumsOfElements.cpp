#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, plus = 0, multi = 1;
    for(int i = 0; i < num_list.size(); i++) {
        plus += num_list[i];
        multi *= num_list[i];
    }
    if(multi < pow(plus, 2)) answer = 1;
    return answer;
}
