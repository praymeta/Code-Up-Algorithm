#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer(2);
    while(money >= 5500) {
        money -= 5500;
        answer[0]++;
    }
    answer[1] = money;
    return answer;
}
