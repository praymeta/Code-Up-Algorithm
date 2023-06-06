#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0, longSide = max(sides[0], sides[1]), shortSide = min(sides[0], sides[1]);
    for(int i = 1; i <= longSide; i++) {
        if(shortSide + i > longSide) answer++;
    }
    for(int i = longSide + 1; i < longSide + shortSide; i++)
        answer ++;
    return answer;
}
