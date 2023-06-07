#include <string>
#include <vector>

using namespace std;

int ThreeCheck(int answer) {
    string temp = "";
    temp = to_string(answer);
    for(int i = 0; i < temp.length(); i++) {
        if(temp[i] == '3') return 1;
    }
    return 0;
}

int solution(int n) {
    int answer = 0, ten = 0;
    while(ten < n) {
        ten++;
        answer++;
        while((answer % 3 == 0) || (ThreeCheck(answer) == 1)) answer++;
    }
    return answer;
}
