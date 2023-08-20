#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0, temp;
    for(int i = 0; i < num_str.length(); i++) {
        temp = num_str[i] - '0';
        answer += temp;
    }
    return answer;
}
