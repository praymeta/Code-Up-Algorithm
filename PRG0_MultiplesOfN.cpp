#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    answer = !(num % n);
    return answer;
}
