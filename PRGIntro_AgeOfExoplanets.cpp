#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "", s_age = to_string(age);
    for(int i = 0; i < s_age.length(); i++) {
        answer += s_age[i] + '1';
    }
    return answer;
}
