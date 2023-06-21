#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if(eq == "=") {
        if(ineq == "<" && n <= m) answer = 1;
        else if(ineq == ">" && n >= m) answer = 1;
    } else {
        if(ineq == "<" && n < m) answer = 1;
        else if(ineq == ">" && n > m) answer = 1;
    }
    return answer;
}
