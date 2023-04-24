#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, a, b, c;
    a = n, b = 6;
    while(b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    answer = (6 * n / a) / 6;
    return answer;
}
