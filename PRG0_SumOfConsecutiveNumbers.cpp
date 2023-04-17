#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    for(int i = -100; i <= 1000; i++) {
        int temp = 0, num_chk = num, j = i;
        while(num_chk > 0) {
            temp += j;
            j++;
            num_chk--;
        }
        if(temp == total) {
            for(int k = 0; k < num; k++) {
                answer.push_back(i++);
            }
        }
    }
    return answer;
}
