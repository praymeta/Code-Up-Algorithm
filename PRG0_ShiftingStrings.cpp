#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    string copyString = A;
    if(A == B) return 0;
    else {
        for(int i = 1; i <= A.length(); i++) {
            copyString = copyString[copyString.length() - 1] + copyString;
            copyString.erase(copyString.length() - 1, 1);
            if(copyString == B) return i;
        }
        return -1;
    }
    return answer;
}
