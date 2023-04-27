#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(n > 0) {
        n -= 7;
        answer++;
    }
    return answer;
}
