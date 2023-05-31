#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string temp = "";
    char stringK = k + '0';
    for(int p = i; p <= j; p++) {
        temp = to_string(p);
        for(int q = 0; q < temp.length(); q++) {
            if(temp[q] == stringK) answer++;
        }
    }
    return answer;
}
