#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    vector<int> alphaB(26, 0);
    vector<int> alphaA(26, 0);
    for(int i = 0; i < before.length(); i++) {
        alphaB[before[i] - 'a']++;
    }
    for(int i = 0; i < after.length(); i++) {
        alphaA[after[i] - 'a']++;
    }
    if(alphaB == alphaA) answer = 1;
    else answer = 0;
    return answer;
}
