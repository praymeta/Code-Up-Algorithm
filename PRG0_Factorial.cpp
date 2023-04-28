#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1, i = 1;
    while(true) {
        i *= answer;
        if(i > n) break;
        answer++;
    }
    return answer - 1;
}
