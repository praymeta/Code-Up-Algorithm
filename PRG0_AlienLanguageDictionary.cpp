#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for(int i = 0; i < dic.size(); i++) {
        int chk = 0, alphabet[26] = {0, };
        for(int j = 0; j < dic[i].length(); j++) {
            alphabet[dic[i][j] - 'a']++;
        }
        for(int j = 0; j < spell.size(); j++) {
            if(alphabet[spell[j][0] - 'a'] == 1) chk++;
        }
        if(chk == spell.size()) answer = 1;
    }
    return answer;
}
