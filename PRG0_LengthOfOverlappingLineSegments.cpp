#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    for(int i = -100; i <= 100; i++) {
        int temp = 0;
        if(lines[0][0] <= i && i < lines[0][1]) temp++;
        if(lines[1][0] <= i && i < lines[1][1]) temp++;
        if(lines[2][0] <= i && i < lines[2][1]) temp++;
        if(temp >= 2) answer++;
    }
    return answer;
}
