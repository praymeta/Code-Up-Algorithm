#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    vector<int> temp(0);
    string num1;
    char num2 = k + '0';
    num1 = to_string(num);
    for(int i = 0; i < num1.length(); i++) {
        if(num1[i] == num2) {
            temp.push_back(i);
        }
    }
    if(temp.size() == 0) answer = -1;
    else answer = temp[0] + 1;
    return answer;
}
