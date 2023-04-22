#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0, cnt = 0, chk[1001] = {0, }, maxIdxVal = 0, maxIdx;
    for(int i = 0; i < array.size(); i++) {
        chk[array[i]]++;
    }
    for(int i = 0; i < 1001; i++) {
        if(maxIdxVal <= chk[i]) {
            maxIdxVal = chk[i];
            maxIdx = i;
        }
    }
    for(int i = 0; i < 1001; i++) {
        if(maxIdxVal == chk[i]) cnt++;
    }
    if(cnt >= 2) answer = -1;
    else answer = maxIdx;
    return answer;
}
