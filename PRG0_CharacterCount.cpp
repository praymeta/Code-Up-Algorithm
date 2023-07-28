#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(int i = 0; i < my_string.length(); i++) {
        if('A' <= my_string[i] && my_string[i] <= 'Z')
            answer[abs('A' - my_string[i])]++;
        else if('a' <= my_string[i] && my_string[i] <= 'z')
            answer[26 + abs('a' - my_string[i])]++;
    }
    return answer;
}
