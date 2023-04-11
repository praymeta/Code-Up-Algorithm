#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int a, b, answer = 0;
    a = common[1] - common[0];
    b = common[common.size() - 1] - common[common.size() - 2];
    if(a == b) {
        answer = common[common.size() - 1] + a;
    } else {
        a = common[1] / common[0];
        answer = common[common.size() - 1] * a;
    }
    return answer;
}
