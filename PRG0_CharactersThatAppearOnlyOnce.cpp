#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int alphabet[26] = {0, };
    for(int i = 0; i < s.length(); i++) {
        alphabet[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(alphabet[i] == 1) answer += i + 'a';
    }
    return answer;
}
