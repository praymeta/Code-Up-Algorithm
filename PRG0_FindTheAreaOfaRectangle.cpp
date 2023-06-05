#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0, maxX = -256, minX = 256, maxY = -256, minY = 256;
    for(int i = 0; i < 4; i++) {
        if(dots[i][0] < minX) minX = dots[i][0];
        if(dots[i][0] > maxX) maxX = dots[i][0];
        if(dots[i][1] < minY) minY = dots[i][1];
        if(dots[i][1] > maxY) maxY = dots[i][1];
    }
    answer = (maxX - minX) * (maxY - minY);
    return answer;
}
