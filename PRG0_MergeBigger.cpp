#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string sa, sb, ansA, ansB;
    sa = to_string(a);
    sb = to_string(b);
    ansA = sa + sb;
    ansB = sb + sa;
    a = stoi(ansA);
    b = stoi(ansB);
    answer = max(a, b);
    return answer;
}
