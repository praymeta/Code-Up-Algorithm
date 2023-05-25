#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, temp;
    string number = to_string(n);
    for(int i = 0; i < number.length(); i++) {
        temp = number[i] - '0';
        answer += temp;
    }
    return answer;
}
