#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(int i = 0; i < my_string.length(); i++) {
        if(48 <= my_string[i] && my_string[i] <= 57) {
            answer += my_string[i] - 48;
        }
    }
    return answer;
}
